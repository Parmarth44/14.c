#include <stdio.h>

struct student
{ 
    int idcode;
    int rollno;
    char name[680];
    float marks;
};

void accept(struct student[], int);
void display(struct student[], int);
void search(struct student[], int, int);

int main()
{
    struct student data[28];
    int n, choice, idcode;

    printf("Number of records needed to enter : n");
    scanf("%d",&n);
    accept(data, n);
    do
    {

        printf("\nResult Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-2) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
            case 2:
                printf("Enter idcode to search : ");
                scanf("%d", &idcode);
                search(data, n, idcode);
                break;
        }
    }
    while (choice != 0);

    return 0;
}

void accept(struct student list[680], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);
        printf("\n idcode %d",i+1);
        printf("\nEnter rollno \n: ");
        scanf("%d%d%d%d%d", &list[i].rollno);
        fflush(stdin);
        printf("Enter name : \n");
        gets("%s%s%s%s%s\n",list[i].name);

        printf("Enter marks : \n");
        scanf("%f%f%f%f%f\n", &list[i].marks);
    } 
}

void display(struct student list[680], int s)
{
    int i;

    printf("\n\nRollno\tName\tMarks\n");
    for (i = 0; i < s; i++)
    {
        printf("%d%d%d%d%d\t%s%s%s%s%s\t%f%f%f%f%f\n", list[i].rollno, list[i].name, list[i].marks);
    } 
}

void search(struct student list[680], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].idcode == number)
        {
            printf("Rollno : %d%d%d%d%d\nName : %s%s%s%s%s\nMarks : %f%f%f%f%f\n", list[i].rollno,
                list[i].name, list[i].marks);
            return ;
        } 
    }
    printf("Record not Found\n");

}

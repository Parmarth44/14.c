#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    int i;

    printf("Enter information of students:\n");

    // storing information
    for(i=0; i<10; ++i)
    {
        printf("Group: %d\n",i+1);

        printf("\n Enter roll:");
        scanf("%d",&s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks: ");
        scanf("%f",&s[i].marks);

        printf("\n");
    }

    printf("Displaying Information:\n\n");
    // displaying information
    for(i=0; i<10; ++i)
    {
        printf("\nGroup :%d\n",i+1);
        printf("\nRoll number: %d\n",s[i].roll);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}

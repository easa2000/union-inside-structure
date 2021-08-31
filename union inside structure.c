// union inside structure

#include<stdio.h>
struct student
{
    union
    {
        char name[20];
        int roll_no;
    };
    int marks;
};

int main()
{
    struct student stud;
    char choice;
    system("cls");
    printf("\n You can enter the name or roll number of the student: ");
    printf("\n Do you want to enter the name? (Y or N): ");
    scanf("%c",&choice);
    if(choice == 'Y' || choice == 'y')
    {
        printf("\n Enter the name: ");
        getchar();
        gets(stud.name);
    }
    else
    {
        printf("\n Enter the roll number: ");
        scanf("%d",&stud.roll_no);

    }
    printf("\n Enter the marks: ");
    scanf("%d",&stud.marks);
    if(choice == 'Y' || choice == 'y')
    {
        printf("\n Name : %s",stud.name);
    }
    else
    {
        printf("\n Roll number : %d",stud.roll_no);
    }
    printf("\n Marks : %d",stud.marks);
    return 0;
}

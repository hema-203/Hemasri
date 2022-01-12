/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
This project was developed by Aryan Singh (roll no: 2111009010066) and Hemasri Ganesh  
*/
#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int i,n;
    struct student s_record[50];
    printf("Please enter the number of students:");
    scanf("%d",&n);
    printf("Please enter the students Record\n");
   
    for(i=0;i<n;i++)
    {
        printf("\nEnter the student's roll number: ");
        scanf("%d", &s_record[i].roll);
        printf("Enter the student's name: ");
        scanf("%s", s_record[i].name);
        printf("Enter the student's mark: ");
        scanf("%f", &s_record[i].marks);
    }
    printf("Printing students Record...\n\n");
   
    for(i=0;i<n;i++)
    {
        printf("sroll: %d\n",s_record[i].roll);
        printf("sname: %s\n",s_record[i].name);
        printf("smarks: %.2f\n\n",s_record[i].marks);
    }
return 0;
}

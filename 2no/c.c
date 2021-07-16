#include<stdio.h>
struct employee
{
    int empid ,salary;
    char name[10],address[10];
};
int main()
{
    int n,i;
    printf("enter a number of Employee who  lives in dharan :");
    scanf("%d",&n);
    struct employee s1[n];
    for(i=0;i<n;i++)

    {
        printf("EMPLOYEE %d\n",i+1);
        printf("Enter a Employee id :");
        scanf("%d",&s1[i].empid);
        printf("Enter a Employee name  :");
        scanf("%s",s1[i].name);
        printf("Entera a Employee address :");
        scanf("%s",s1[i].address);
        printf("Enter a Employee salary :");
        scanf("%d",&s1[i].salary);
    }
        printf("\n Name ranges between 15000-20000\n");
        printf("Emp id \t Emp name \tEmp address \t Emp salary\n");
        for(i=0;i<n;i++)
        {if(s1[i].salary>=15000 && s1[i].salary<=20000 )
        {
            printf("%d \t %s \t \t%s \t\t %d \t\n",s1[i].empid,s1[i].name,s1[i].address,s1[i].salary);
        }
        }
    return 0;
}
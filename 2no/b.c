#include<stdio.h>
struct employee
{
    int empid ,salary;
    char name[10],address[10];
};
int main()
{
    int n,i;
    printf("enter a number of people who does not  lives in dharan :");
    scanf("%d",&n);
    struct employee s1[n];
    for(i=0;i<n;i++)

    {
        printf("enter a employee id :");
        scanf("%d",&s1[i].empid);
        printf("enter a employee name  :");
        scanf("%s",s1[i].name);
        printf("entera a employee address :");
        scanf("%s",s1[i].address);
        printf("enter a employee salary :");
        scanf("%d",&s1[i].salary);
        printf("the employee id is :%d\n",s1[i].empid);
        printf("the employee name is :%s\n",s1[i].name);
        printf("the employee address is :%s\n",s1[i].address);
        printf("the employee salary is :%d\n",s1[i].salary);
    }
    return 0;
}
#include<stdio.h>
struct employee
{
    int empid ,salary;
    char name[10],address[10];
};
int main()
{
    int n,i,percent;
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
       printf("by increasing salary by 10%%\n ");
     
        printf("Emp Id\t\tEmp name\tEmp Address\t Emp salary\n");
        if(s1[i].address =='biratnagar')
       { for(i=0;i<n;i++)
        {
            percent=(float)(0.1)*s1[i].salary+s1[i].salary;
            printf("%d\t\t%s\t\t%s\t\t%d\t\n",s1[i].empid,s1[i].name,s1[i].address,percent);
        }}
        else
            { for(i=0;i<n;i++)
        {
            printf("%d\t\t%s\t\t%s\t\t%d\t\n",s1[i].empid,s1[i].name,s1[i].address,s1[i].salary);
        }}
        
    return 0;
}
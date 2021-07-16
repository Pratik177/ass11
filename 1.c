#include<stdio.h>
struct student
{
    char name[10];
    int rollno,mark,k;

};
int main()
{
    struct student s1[10];
    int total=500;
    float z;
    int i,k=0;
    printf("enter a detail fot 10 student\n");
    for(i=0;i<10;i++)
    {
    printf("enter a name of  %d student :",i+1);
    scanf("%s",s1[i].name);
    printf("enter a roll no %d student :",i+1);
    scanf("%d",&s1[i].rollno);
    int j;
    for(j=0;j<5;j++)
    {
     printf("enter a mask in %d subject :",j+1);
     scanf("%d",&s1[j].mark);
    
    }
    printf("the name of student is :%s  \n",s1[i].name);
    printf("the roll no of student is :%d  \n",s1[i].rollno);
    for(j=0;j<5;j++)
    {
         k+=s1[j].mark;
    }
        printf("the total mask otained is %d\n",k);
         z=(float)k/total * 100;
        printf("percent  = %.2f%%\n",z);
        k-=k;
    }
    return 0;

}
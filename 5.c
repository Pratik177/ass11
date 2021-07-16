#include<stdio.h>
struct student
{
    int rollno;
    char name[5];
};
int main()
{
    struct student p[4],q[4],temp;
    int i,j;
    for(i=0;i<4;i++)
    {printf("enter a %d student name :",i+1);
    scanf("%s",p[i].name);
    printf("entera a %d roll no :",i+1);
    scanf("%d",&p[i].rollno);
    }
   
 
    for(i=0;i<4;i++)
    {
        q[i]=p[i];
        for(j=i;j<4;j++)
        {
            if(q[i].rollno > p[j].rollno)
            {
                temp=p[i];
                p[i]=p [j];
                p[j]=temp;
            }
        }
    }
    printf("the student in asceding order are  \n");
    for(i=0;i<4;i++)
    {
        printf(" %d - %s\n ",p[i].rollno,p[i].name);
    }
    return 0;

} 
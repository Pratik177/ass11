#include<stdio.h>
typedef struct time
{
    int hr,min,sec;
}time;
time timediff(time,time);
int main()
{
    int i;
   struct time t1,t2,t3;
  { printf("enter a hour :");
   scanf("%d",&t1.hr);
   printf("enter a first minute : ");
   scanf("%d",&t1.min);
   printf("enter a second :");
   scanf("%d",&t1.sec);
   printf("enter a 2nd hour :");
   scanf("%d",&t2.hr);
   printf("enter a 2nd minute :");
   scanf("%d",&t2.min);
   printf("enter a 2nd second :");
   scanf("%d",&t2.sec);
   t3=timediff(t1,t2);
   printf("\nthe final hour is %d:%d:%d -",t3.hr,t3.min,t3.sec);
   return 0;
   }
}
   time timediff(time x,time y)
   {
       time z;
   z.hr=x.hr-y.hr;
   z.min =x.min -y.min;
   z.sec=x.sec - y.sec;
   return z;
   }

#include<stdio.h>
typedef struct complex
{
    int real,img;
}complex;
complex add(complex,complex);
int main()
{
    int res;
    struct complex c1,c2,c3;
    printf("enter a real number of 1st complex : ");
    scanf("%d",&c1.real);
    printf("enter a imaginary number of 1st complex : ");
    scanf("%d",&c1.img);
    printf("enter a real number of 2nd complexr : ");
    scanf("%d",&c2.real);
    printf("enter a imaginary number of 2nd complex : ");
    scanf("%d",&c2.img);
    c3=add(c1,c2);
    printf("the complex number is %d + i%d",c3.real,c3.img);
    return 0;
}
complex add(complex  x, complex  y)
{
    complex z;
    z.real=x.real+y.real;
    z.img=x.img +y.img;
    return z;
}
#include<stdio.h>
void main()
{
    int a=10,b=5;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Before Swapping\n%d %d\n",*p,*q);
    *p= *p + *q;
    *q= *p - *q;
    *p = *p- *q;
    printf("After Swapping \n%d %d",*p,*q);
    printf("\nAddress of a is %p \n",p);
    printf("Sum of 2 numbers %d", *p+*q);
}
#include<stdio.h>
void main()
{
    char *ptr;
    ptr= (char *)malloc(10);
    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    strcpy(ptr,"Programming");
    printf("%s, Address = %u \n",ptr,ptr);
    ptr=(char *)realloc(ptr,20);
    strcat(ptr," in C");
    printf("%s, Address = %u \n",ptr,ptr);
}
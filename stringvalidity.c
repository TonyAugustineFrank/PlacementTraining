#include<stdio.h>
void main()
{
    printf("Enter a String with * and #\n");
    char a[20];
    gets(a);
    int i=0,c=0;
    while(a[i]!='\0')
    {
        if(a[i]=='*')
        c++;
        else if(a[i]=='#')
        c--;
        else
        {
            break;
        }

        i++;
    }
    if(a[i]!='\0')
    {
        printf("String is invalid\n");
    }
    else
        printf("String is valid\n %d",c);
}
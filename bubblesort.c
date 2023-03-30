#include <stdio.h>
void main()
{
    int a[100],n,i,j,t,swaps,comp;
    swaps=comp=0;

    printf("Enter the total Number of Elements\n");
    scanf("%d", &n);

    printf("Please Enter the Array Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            comp++;
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                swaps++;
            }
        }
    }
    printf("List Sorted in Ascending Order\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nNumber of comparisons : %d\nNumber of swaps : %d",comp,swaps);
}
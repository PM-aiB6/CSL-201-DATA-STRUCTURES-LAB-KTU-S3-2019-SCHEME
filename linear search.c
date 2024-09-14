#include<stdio.h>
void main()
{
    int i,n,x,count=0,a[30],t=0;
    t=t+2;
    printf("enter the no of elements:");
    t++;
    scanf("%d",&n);
    t++;
    printf("enter the array elements:");
    t++;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        t++;
    }
    t++;t++;
    printf("enter the element to search:");
    t++;
    scanf("%d",&x);
    t++;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            count++;
        }
        t++;
    }
    t++;t++;
    if(count>0)
    {
        printf("item is found at %d times",count);
        t++;
    }
    else
    {
        printf("item not found");
        t++;
    }
    printf("\n space complexity = %d",(5*4+4*n));
    t++;t++;
    printf("\n time complexity =%d ", t);
}
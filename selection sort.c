#include<stdio.h>
void main()
{
	int i,n,j,small,temp=0,t=0;
	t+2;
	printf("enter the array size:");
	scanf("%d",&n);
	t+2;
	int a[100];
	printf("enter the array elements:");
	t+2;
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		t+2;
	}
	t++;

	for(i=0; i<n; i++)
	{
		t++;
		small=i;
		t+2;
		for(j=i+1; j<n; j++)
		{
			if( a[small]>a[j])
			{
				small=j;
				t++;
			}
		}
		t++;
		if(i!=small)
		{
			temp=a[i];
			a[i]=a[small];
			a[small]=temp;
			t+3;
		}
	}
	printf("sorted array:");
	t++;
	for(i=0; i<n; i++)
	{
		printf("%d \t",a[i]);
		t+2;
	}
	t++;
	t++;
	printf("\n time complexity=%d",t);
	printf("\n space complexity=%d",(24+(n*4)));
}
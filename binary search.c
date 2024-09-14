#include<stdio.h>
void main()
{
	int i,n,x,left=0,right,a[30],flag=0,mid,t=0;
	t++;
	printf("enter the no of elements:");
	t++;
	scanf("%d",&n);
	t++;
	printf("enter the array elements:");
	for(i=0; i<n; i++)
	{
		t++;
		scanf("%d",&a[i]);
		t++;
	}
	t++;

	printf("enter the element to be searched:");
	t++;
	scanf("%d",&x);
	t++;
	right=n-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		t++,t++,t++;

		if(x==a[mid])
		{
			printf("element is present at %d",mid+1);
			t++;
			flag=1;
			t++;
			break;
		}
		else if(x>a[mid])
		{
			left=mid+1;
			t++;
		}
		else if(x<a[mid])
		{
			right=mid-1;
			t++;
		}
	}
	if(flag==0)
	{
		printf("element is not found");
		t++;
	}

	printf("\n space complexity=%d",(8*4)+(n*4));
	t++;
	t++;
	printf("\n time complexity=%d",t);
}
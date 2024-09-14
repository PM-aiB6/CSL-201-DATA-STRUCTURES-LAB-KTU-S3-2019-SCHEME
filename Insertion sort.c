#include <stdio.h>
void main()
{
	int i,j,n,temp,t=0;
	t++;
	printf("enter array size:");
	t++;
	scanf("%d",&n);
	t++;
	int a[n];
	printf("enter the array elements:");
	t++;
	for(i=0; i<n;i++)
	{
	t++;
	scanf("%d",&a[i]);
	t++;
	} t++;

	for(i=1; i<n;i++)
	{
	temp=a[i];
		j=i-1;
		t=t+3;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			t=t+2;
			j--;
		}
		t++;
		a[j+1]=temp;
		t++;
	} t++;
	printf("sorted array is:");
	t++;
	for(i=0; i<n;i++)
	{
	t++;
	printf("%d \t",a[i]);
	t++;
	} t++;
	printf("\n space complexity=%d",(5*4+4*n));
	t++,t++;
	printf("\n time complexity=%d",t);
}
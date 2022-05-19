#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[i];
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j--)
		{
			if(a[j]>a[i])
			{
				a[j+1]=a[j];
			}
			else
			{
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

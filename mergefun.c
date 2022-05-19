#include<stdio.h>
int  * merge(int *a,int n,int *b,int m)
{
	int i=0,j=0,k=0;
	static int res[100];
	while(i<n && i<m)         // n=3   m=4
	{                         // 1  2  3
		if(a[i]<b[j])         // 4   5  6   7
		{
			res[k++]=a[i++];
		}
		else
		{
			res[k++]=b[j++];
		}
	}
	for(k=0;k<n;k++)
	{
		printf("%d\n",res[k]);
	}
	while(i<n)
	{
		res[k++]=a[i++];
	}
	while(j<m)
	{
		res[k++]=b[j++];
	}
	return res;
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],b[m],i,j,*res;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	res=merge(a,n,b,m);
	for(i=0;i<(m+n);i++)
	{
		printf("%d ",res[i]);
	}
}

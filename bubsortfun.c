#include<stdio.h>
int bub_sort(int *a,int n)
{
	int i,j,temp,sc=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
		if(a[i]<a[j])
		
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			sc++;	
		}
		if(sc==0)
		{
			break;
		}
		
	}
	
}
int main()
{
	 int n;
	 scanf("%d",&n);
	 int a[n],i;
	 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 bub_sort(a,n);
	 for(i=0;i<n;i++)
	 {
	 	printf(" %d",a[i]);
	 }
}

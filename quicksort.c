#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int part(int *arr,int l,int h)
{
	int p=h,i,j=l;
	for(i=l;i<p;i++)
	{
		if(arr[i]<arr[p])
		{
			swap(&arr[i],&arr[j]);
			j++;
		}
	}
	swap(&arr[j],&arr[p]);
	return j;
}
int quick_sort(int *arr,int l,int h)
{
	int p;
	if(l<h)
	{
		p=part(arr,l,h);
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,h);
	}
}
int main()
{
 int n,arr[100],i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 quick_sort(arr,0,n-1);
 for(i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
}


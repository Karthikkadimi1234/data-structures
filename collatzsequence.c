#include<stdio.h>
int main()
{
	int i,n,cmax,c=0,m;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
	while(n>1)
	{
		if(n%2==0)
		{
		   n=n/2;	
		   c++;
		}
		else
		{
			n=3*n+1;
			c++;
		}
		
		if(c>cmax)
			cmax=c;
	}
    }
printf("%d",cmax);
}

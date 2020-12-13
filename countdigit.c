#include<stdio.h>
int main()
{
	int n;
	int d;
	scanf("%d %d",&n,&d);
	int r,i=0;
	while(n!=0)
	{
		r=n%10;
		if(r==d)
		{
		   i=i+1;
	    }
		n=n/10;
	}
	printf("%d",i);
}

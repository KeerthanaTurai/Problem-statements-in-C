#include<stdio.h>
int main()
{
	int k,n,c,b;
	scanf("%d%d",&n,&k);
	c=n;
	b=c/k;
	//printf("%d",b);
	while(b > 0)
	{
	c=c + b;
	b=b/k;
    }
	printf("%d",c);
}

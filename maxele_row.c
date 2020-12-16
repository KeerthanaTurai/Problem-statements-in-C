#include<stdio.h>
int main()
{
	int m,n,i,j,max;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;++i)
	{
		max=a[i][0];
		for(j=1;j<n;++j)
		{
			if(a[i][j]>max)
			max=a[i][j];
		}
		printf("%d ",max);
	}
}

#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
int main()
{
	int a,b,n,sum,m;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		a=0;
		for(int i=1;i<=n/m;i++)
		{
			
			sum=0;
			if(i>1)
			{
				printf(" ");	
			}
				for(int j=1;j<=m;j++)
				{
					a=a+2;
					sum+=a;
				}
		printf("%d",sum/m);	
		}
		if(n%m)
		{
			sum=0;
			int j;
			for(j=1;j<=n%m;j++)
			{
				a=a+2;
				sum+=a;
			}
			printf(" %d",sum/(j-1));
		}
		printf("\n");
	}
	return 0;
}

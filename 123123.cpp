#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[n+1][n+1];
		for(int i=0;i<n;i++)
		{
			if(((i+1)/n)%2==0)
			{
				for(int j=n-1;j>=0;j--)
				{
					a[i/n][j]=(i+1)*(j+1);
				}
				
			}
			else
			{
				for(int j=0;j<n;j++)
				{
					a[i/n][j]=(i+1)*(j+1);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((i+1)%n==0)
				{
					printf("%d\n",a[i][j]);
				}
				else
				{
					printf("%d ",a[i][j]);
				}
			}
		}
	}
	return 0;
}

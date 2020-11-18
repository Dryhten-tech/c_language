#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
int main()
{
	int s,m;
	scanf("%d",&s);
	for(int i=1;i<=s;i++)
	{
		for(int j=1;j<=s;j++)
		{
			for(int k=1;k<=s;k++)
			{
				if(i!=j&&j!=k&&i!=k&&i<j&&j<k)
				{
					printf("%d %d %d\n",i,j,k);
				}
			}
			
		}
	}	
	return 0;
}

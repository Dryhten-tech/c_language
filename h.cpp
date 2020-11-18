#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
int main()
{
	int realnum,num,n,m,sum,sumdown,xdown,ydown,k,min,mindown,a,b,c,d,e,f;
	
	while(scanf("%d %d",&m,&n)!=EOF)
	{	
		
		if(n == 0&& m == 0)
		{
			break;
		}
		int t[m][n];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&t[i][j]);
			}
			
		}
		double ave1[m];
		double ave2[n];
		for(int i=0;i<m;i++)
		{
			sum=0;
			for(int j=0;j<n;j++)
			{
				sum=sum+t[i][j];
			}
			ave1[i]=double(sum)/n;
			if(i == m-1)
			{
				printf("%.2f\n",ave1[i]);
			}
			else
			{
				printf("%.2f ",ave1[i]);
			}
		}
		
		for(int j=0;j<n;j++)
		{	
			sum=0;
			for(int i=0;i<m;i++)
			{
				sum=sum+t[i][j];
			}
			ave2[j]=double(sum)/m;
			if(j == n-1)
			{
				printf("%.2f\n",ave2[j]);
			}
			else
			{
				printf("%.2f ",ave2[j]);
			}
		}
		k=0;
		for(int i=0;i<m;i++)
			{
				sumdown=0;
				for(int j=0;j<n;j++)
				{
					if(t[i][j]>=ave2[j])
					{
						sumdown++;
					}
					if(sumdown==n)
					{
						k++;
					}
				}
			}
		printf("%d\n\n",k);
		
	}
	return 0;
}

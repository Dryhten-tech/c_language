#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,m,s;
	s=0;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int a[n];
		a[0]=2;
		for(int i=1;i<=n;i++)
		{
			a[i]=a[i-1]+2;
		}
		for(int i=1;i<=n;i++)
		{
			if(i%m==0)
			{
				for(int j=i-1;j<=i-1+m;j++)
				{
					s=s+a[j];
					printf("%d ",s/m);
				}
			}
			else
				if(i!=n)
				{
					for(int j=i-1;j<=i-1+m;j++)
					{
						s=s+a[j];
						printf("%d ",s/m);
					}
				}	
				else
				{
					for(int j=i-1;j<=i-1+m;j++)
					{
						s=s+a[j];
						printf("%d ",s/(n-i));
					}
				}
		}
	}
	return 0;
}

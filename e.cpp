#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
int main()
{
	int num,n,m,sum,sumdown,k,min,mindown,a,b,c,d,e,f;
	int f1=1;
	while(scanf("%d",&n)!=EOF)
	{	
		if(n == 0)
		{
			break;
		}
		int t[n];
		sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&t[i]);
			sum=sum+t[i];
		}
		k=0;
		for(int i=0;i<n;i++)
		{
			sumdown=t[i]/100+t[i]%100/50+t[i]%100%50/10+t[i]%100%50%10/2+t[i]%100%50%10%2/1;
			k=k+sumdown;
		}
		printf("%d\n",k);
		
	}
	return 0;
}

#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
int main()
{
	int num,n,sum,k,min,mindown;
	while(scanf("%d",&n)!=EOF)
	{	
		if(n == 0)
		{
			break;
		}
		min = 999;
		int a[n+1];
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if(min>a[i])
			{
				min = a[i];
				mindown = i;
			}
		}
		k=a[1];
		a[1]=a[mindown];
		a[mindown]=k;
		for(int i=1;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("%d\n",a[n]);
	}
	return 0;
}

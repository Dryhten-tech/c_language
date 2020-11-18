#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void jojo(int a[],int n)
{
	int k;
	int t=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j+1];
				a[j+1]=a[j];
				a[j]=k;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}
int main()
{
	int x,y,j,n;
	
	while(scanf("%d",&n)!=EOF)
	{
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		jojo(a,n);
	}
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<9;j++)
	{
		for(int m=0;m<9-j;m++)
		{
			if(a[m]>a[m+1])
			{int h;
			h=a[m];
			a[m]=a[m+1];
			a[m+1]=h;
			}
		}
	}
	for(int y=0;y<=9;y++)
	{
		printf("%d",a[y]);
	}
	
	return 0;
}

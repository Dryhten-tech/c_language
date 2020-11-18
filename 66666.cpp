#include<stdio.h>
int main(){
int a[3][4];
for(int i=0;i<3;i++)
{
	for(int j=0;j<4;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(int i=0;i<3;i++)
{
	for(int j=0;j<4;j++)
	{
		if(j==3)
		{
			printf("%d\n",a[i][j]);
		}
		else
		{
			printf("%d",a[i][j]);
		}
		
	}
}
return 0;
}



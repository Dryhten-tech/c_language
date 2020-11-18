#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
int main()
{
	int s,m;
	for(int i=0;i<=100;i++)
	{
		for(int j=0;j<=100;j++)
		{
			for(int k=0;k<=100;k++)
			{
				s=i*5+j*3+k*1/3;
				m=i+j+k;
				if (s==100&&m==100&&k%3==0)
				{
					printf("¹«¼¦%d£¬Ä¸¼¦%d£¬Ð¡¼¦%d\n",i,j,k);
				}
					
			}
		}
			
	}
		
	return 0;
}

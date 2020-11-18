#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n;
	scanf("%d",&n);
	switch(n) 
	{
		case 0:printf("%d",n);break;
		default:
		{
		if(n<0)
		{
			printf("%d",-n);
			break;
		}
		else
		{
			printf("%d",n*n);
			break;
		}
		}
		
	}
	return 0;
}

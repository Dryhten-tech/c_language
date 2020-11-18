#include<stdio.h> 
#include<math.h>
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(n==0&&m==0)
		{
			break;
		}
		else
		{
			printf("%d\n",n+m);
		}
	}
	return 0;
}

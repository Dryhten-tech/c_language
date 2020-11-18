#include<stdio.h> 
#include<math.h>
#include<ctype.h>
int main()
{
	char a;
	int n=0;
	int m;
	scanf("%d",&m);
	getchar();
	for(int i=1;i<=m;i++)
	{
		while((a=getchar())!='\n')
		{
			if(isdigit(a))
			{
				n++;
			}
    	
    	}
    printf("%d\n",n);
	}
	return 0;
}

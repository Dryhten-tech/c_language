#include<stdio.h> 
#include<math.h>
#include<ctype.h>
int main()
{
	char a;
	int n;
	int m;
	scanf("%d",&m);
	getchar();
	for(int i=1;i<=m;i++)
	{n=0;
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

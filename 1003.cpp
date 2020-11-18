#include<stdio.h> 
#include<math.h>
int main()
{
	int n,m,a,b,c;
	scanf("%d",&c);
	
    while(c--)
	{
		scanf("%d",&a);
    	m=0;
    	for(n=1;n<=a;n++)
    	{
    		scanf(" %d",&b);
    		m+=b;
		}
    	if(c==0)
    	{
    		printf("%d\n",m);
    	}
		else
		{
			printf("%d\n\n",m);
		}
    }
	return 0;
}

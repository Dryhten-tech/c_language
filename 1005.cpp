#include<stdio.h> 
#include<math.h>
int main()
{
	int n,m,a,b,c;
    while(scanf("%d",&a)!=EOF)
	{
    	m=0;
    	for(n=1;n<=a;n++)
    	{
    		scanf(" %d",&b);
    		m+=b;
		}
    	printf("%d\n\n",m);
    }
    
	return 0;
}

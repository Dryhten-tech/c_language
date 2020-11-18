#include<stdio.h>
#include<math.h>
int main()
{
	char a,b,c,i,n;
    while(scanf("%c%c%c",&a,&b,&c)!=EOF)
	{
		getchar();
		for(n=1;n<=3;n++){
		
		if((int)c<(int)b)
		{
			i=c;
			c=b;
			b=i;
		}
		else if((int)b<(int)a)
		{
			i=a;
			a=b;
			b=i;
			
		}
		else if((int)c<(int)a)
		{
			i=a;
			a=c;
			c=i;
			
		}	
		}
    	printf("%c %c %c\n",a,b,c);
    }
	return 0;
}

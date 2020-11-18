#include <stdio.h>
int main()
{
	int i,j,N,t;
	double S;
	i=1;
	t=1;
	S=0;
	scanf("%d",&N);
    	for(j=1;j<=N*3;j+=3)
    	{
    		if(i<=N)
		    {
		    	S=S+(double)1/j*t;
		    	i=i++;
		    	t=-t;
		    }
		    else
		    {
		    	break;
		    }
    	}
    printf("sum = %.3f",S);
	return 0;
} 

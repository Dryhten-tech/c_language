#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string>
#include<cstdio>
#include<cstdlib>
int main()
{
	int i,j,N;
	i=1;
	double S;
	scanf("%d",&N);
    	for(j=1;j<=N*2;j+=2)
    	{
    		if(i<=N)
		    {
		    	S=S+(double)1/j;
		    	i=i++;
		    }
		    else
		    {
		    	break;
		    }
    	}
    printf("sum = %.6f",S);
	return 0;
} 

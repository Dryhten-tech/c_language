#include <stdio.h>
int main()
{
	int i,N;
	double S;
	scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
    	S=S+(double)1/i;
    }
	printf("sum = %.6f",S);
	return 0;
} 

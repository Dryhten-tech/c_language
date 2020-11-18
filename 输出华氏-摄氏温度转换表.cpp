#include <stdio.h>
#include <math.h>
int main()
{
	int lower,upper,fahr;
	double celsius;
	scanf("%d %d",&lower,&upper);
	if(lower<=upper&&upper<=100)
	{
		int i;
		printf("fahr celsius\n");
		for(i=lower;i<=upper;i=i+2)
		{
			fahr = i;
			celsius = (double)5*(fahr-32)/9;
			printf("%d%6.1f\n",fahr,celsius);
		}
	}
	else
	{
	printf("Invalid.");
	}

	return 0;
} 

#include<stdio.h>
#include<math.h>
#define PI 3.1415927
int main()
{
	double r,v;
    while(scanf("%lf",&r)!=EOF)
	{
		v=4.0/3*PI*pow(r,3);
    	printf("%.3f\n",v);
    }
	return 0;
}

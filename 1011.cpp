#include<stdio.h>
#include<math.h>
int main()
{
	double a,r;
    while(scanf("%lf",&a)!=EOF)
	{
		if(a<0) r=-a;
		else r=a;
    	printf("%.2f\n",r);
    }
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,n;
    while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=EOF)
	{
		n=sqrt(pow(a-c,2)+pow(b-d,2));
    	printf("%.2f\n",n);
    }
	return 0;
}

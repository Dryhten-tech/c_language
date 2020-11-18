#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,result;
    while(scanf("%d %d",&a,&b)!=EOF)
	{
		result = fact(b)/(fact(a)*fact(b-a));
    	printf("result= %.f\n",result);
    }
	return 0;
}
double fact(int n)
{
	int i;
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
} 

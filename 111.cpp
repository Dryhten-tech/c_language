#include<stdio.h>
#include<math.h>
int main()
{
	int m,n;
	scanf("%d",&m);
	do{
		if(m==0)
		{
		printf("%d",m); 
		break;
		}
		else
		{
		n=m%10;
    	m/=10;
    	printf("%d,",n);
		} 
	}while(m > 0); 
	return 0;
}

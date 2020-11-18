#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,m,max,min;
	double s;

	while(scanf("%d",&n)!=EOF)
	{
		s=0;
		max=0;
		min=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&m);
			s=s+m;
			if(max<m||i==1)
				max=m;
			if(min>m||i==1)
				min=m;
		}
		s=(s-max-min)/(double)(n-2);
		printf("%.2f\n",s);
	}
	return 0;
}

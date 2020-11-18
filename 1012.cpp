#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	char r;
    while(scanf("%d",&a)!=EOF)
	{
		if (90<=a&&a<=100) printf("A\n");
		else if (80<=a&&a<=89) printf("B\n");
		else if (70<=a&&a<=79) printf("C\n");
		else if (60<=a&&a<=69) printf("D\n");
		else if (0<=a&&a<=59) printf("E\n");
		else printf("Score is error!\n");
    }
	return 0;
}

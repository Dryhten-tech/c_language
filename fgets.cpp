#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[100]={'\0'};
	fgets(a,100,stdin);
	getchar();
	for(int i=strlen(a)-1;i>=0;i--)
	{
		printf("%s",a[i]);
	}
	return 0;
}

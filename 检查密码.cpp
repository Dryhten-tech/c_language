#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	int maxlen,high,have,realnum,num,n,m,sumdown,xdown,ydown,k,min,mindown,c,d,e,f;
	char a[100];
	char maxdown;
	int b[10]={0};
	while(scanf("%d",&n)!=EOF){
		maxlen=0;
		for(int i=0;i<n;i++){
			getchar();
			gets(a);
			if(maxlen<strlen(a)){
				maxlen=strlen(a);
				maxdown=a;
			}
		}	
	}
	printf("The longest is: %s",maxdown);
	return 0;
}

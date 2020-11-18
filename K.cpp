#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int realnum,num,n,m,sum,sumdown,xdown,ydown,k,min,mindown,max,maxdown,a,b,c,d,e,f;
	char t[100];
	while(gets(t)){
		max=t[0];
		for(int i=0;i<strlen(t);i++){
			if(t[i]>=max){
				max=t[i];
			}
		}
		for(int i=0;i<strlen(t);i++){
			if(t[i]==max){
				if(i==strlen(t)-1){
					printf("%c",t[i]);
					printf("(max)\n");
				}else{
					printf("%c",t[i]);
					printf("(max)");
				}
				
			}else if(i==strlen(t)-1){
				printf("%c\n",t[i]);
			}else{
				printf("%c",t[i]);
			}
		}
	}
	return 0;
}

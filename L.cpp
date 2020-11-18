#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int realnum,num,n,m,sum,sumdown,xdown,ydown,k,min,mindown,a,b,c,d,e,f;
	char t[100];
	while(gets(t)){
		for(int i=0;i<strlen(t);i++){
			if(i==0||t[i-1]==' '||t[i-1]=='\n'){
			t[i]=t[i]-32;
			}
		}
		printf("%s\n",t);
	}
	
	return 0;
}

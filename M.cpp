#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int realnum,num,n,m,sum,sumdown,xdown,ydown,k,min,mindown,a,b,c,d,e,f;
	char t[100];
	scanf("%d",&n);
	getchar();
	for(int j=0;j<n;j++){
		gets(t);
		int u[5]={0};
		for(int i=0;i<strlen(t);i++){
			if(t[i]=='a'){
				u[0]++;
			}else if(t[i]=='e'){
				u[1]++;
			}else if(t[i]=='i'){
				u[2]++;
			}else if(t[i]=='o'){
				u[3]++;
			}else if(t[i]=='u'){
				u[4]++;
			}
		}
		printf("a:%d\n",u[0]);
		printf("e:%d\n",u[1]);
		printf("i:%d\n",u[2]);
		printf("o:%d\n",u[3]);
		printf("u:%d",u[4]);
		if(j==n-1){
			printf("\n");
		}else{
			printf("\n\n");
		}
	}	
	
	return 0;
}

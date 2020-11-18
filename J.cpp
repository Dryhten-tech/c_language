#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int realnum,num,n,m,sum,sumdown,xdown,ydown,min,mindown,a,b,c,d,e,f;
	scanf("%d",&n);
	getchar();
		for(int i=0;i<n;i++){
			char t[100];
			int f1=0;
			gets(t);
			if(t[0] <= 122 && t[0] >= 97 || t[0] <= 90 && t[0] >= 65||t[0]=='_'){
				for(int j=1;j<strlen(t);j++){
					if(t[j] <= 122 && t[j] >= 97 || t[j] <= 90 && t[j] >= 65 || t[j] == '_' || t[j] <= 57 && t[j] >= 48){
					}else{
						f1=1;
						break;
					}
				}
			}else{
				f1=1;
			}
			if(f1==1){
				printf("no\n");
			}else{
				printf("yes\n");
			}
		}
	return 0;
}



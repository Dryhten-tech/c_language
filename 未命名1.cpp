#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int k=1;k<=n;k++){
			char a1[1003],b1[1003];
			int c1[1003];
			for(int i=0;i<1002;i++){
				a1[i]=b1[i]='\0';
				c1[i]=0;
			}
			scanf("%s %s",a1,b1);
			int l1=strlen(a1);
			int l2=strlen(b1);
			if(l1>=l2){
				for(int i=l1-1;i>=0;i--){
					c1[i+1]=a1[i]-'0';
					if((i-(l1-l2))>=0){
						c1[i+1]+=b1[i-(l1-l2)]-48;
					}
				}
			}
			else if(l2>l1){
				for(int i=l2-1;i>=0;i--){
					c1[i+1]=b1[i]-'0';
					if((i-(l2-l1))>=0){
						c1[i+1]+=a1[i-(l2-l1)]-48;
					}
				}
			}
			printf("Case %d:\n",k);
			printf("%s + %s = ",a1,b1);
			int l=l1>l2?l1:l2;
			for(int i=l;i>=0;i--){
				if(c1[i]>=10){
					c1[i-1]+=c1[i]/10;
					c1[i]%=10;
				}
			}
			int i=0;
			if(c1[0]==0)
				i++;
			for(;i<=l;i++){
				printf("%d",c1[i]);
			}
			printf("\n");
			if(k!=n){
				printf("\n");
			}
		}
	}
	return 0;
}

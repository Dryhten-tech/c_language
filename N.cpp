#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int high,have,realnum,num,n,m,sumdown,xdown,ydown,k,min,mindown,c,d,e,f;
	scanf("%d",&n);
	getchar();
	for(int j=0;j<n;j++){
		have=0;
		k=0;
		m=0;
		char str_a1[1002],str_b1[1002];
		scanf("%s",str_a1);
		scanf("%s",str_b1);
		int l1=strlen(str_a1);
		int l2=strlen(str_b1);
		int a1[1003],b1[1003];
		memset(a1,0,sizeof(a1));
		memset(b1,0,sizeof(b1));
		
		int sum,lenth_a,lenth_b;
		int c1[1003];
		

		for(int i=0;i<strlen(str_a1);i++){
			a1[i]=str_a1[i]-'0';
		}
		
		for(int i=0;i<strlen(str_b1);i++){
			b1[i]=str_b1[i]-'0';
		}
		if(k==strlen(a1)){
			for(int i=k-1;i>=)
		}
		if(strlen(str_a1)>strlen(str_b1)){
			k=strlen(str_a1);
		}else{
			k=strlen(str_b1);
		}
		for(int i=k-1;i>=0;i--){
			
			if(a1[i]+b1[i]+have>=10){
				c1[i]=a1[i]+b1[i]+have-10;
				have=1;
			}else if(a1[i]+b1[i]+have<10){
				c1[i]=a1[i]+b1[i]+have;
				have=0;
			}
			if(i==0&&have==1){
				high=have;
				m=1;
			}
		}
		if(j==n-1){
			printf("Case %d:\n",j+1);
			for(int i=0;i<k;i++){
				printf("%d",a1[i]);
			}
			printf(" + ");
			for(int i=0;i<k;i++){
				printf("%d",b1[i]);
			}
			printf(" = ");
			if(m==1){
				printf("%d",high);
				for(int i=0;i<k;i++){
					printf("%d",c1[i]);
				}
				
			}else{
				for(int i=0;i<k;i++){
					printf("%d",c1[i]);
				}
			}
		}else{
			printf("Case %d:\n",j+1);
			for(int i=0;i<k;i++){
				printf("%d",a1[i]);
			}
			printf(" + ");
			for(int i=0;i<k;i++){
				printf("%d",b1[i]);
			}
			printf(" = ");
			if(m==1){
				printf("%d",high);
				for(int i=0;i<k;i++){
					printf("%d",c1[i]);
				}
				
			}else{
				for(int i=0;i<k;i++){
					printf("%d",c1[i]);
				}
			}
			printf("\n\n");
		}
	}	
	return 0;
}

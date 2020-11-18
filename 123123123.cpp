#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int realnum,num,n,m,sum,sumdown,xdown,ydown,k,min,mindown,a,b,c,d,e,f;
	int t[100005]={0};
	int t_int[100005]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t[i]);

	}
	for(int i=0;i<n;i++){
		t_int[t[i]]++;
	}
	for(int i=0;i<n;i++){
		if(t_int[t[i]]==1){
			printf("%d",t[i]);
			return 0;
		}
	}
	printf("None");
	return 0;
}

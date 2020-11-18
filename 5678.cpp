#include<stdio.h>
#include<ctype.h>
int main(){
	char a[80];
	int t1,t2,t3,t4,s1,s2,s3,s4;
	s1=0;
	s2=0;
	s3=0;
	s4=0;
	scanf("%s",a);
	for(int i=0;i<80;i++)
	{
		t1=isspace(a[i]);
		t2=islower(a[i]);
		t3=isupper(a[i]);
		t4=isdigit(a[i]);
		if(t1!=0)
		{
			s1=s1+1;
		}
		else if(t2!=0)
		{
			s2=s2+1;		
		}
		else if(t3!=0)
		{
			s3=s3+1;
		}
		else if(t4!=0)
		{
			s4=s4+1;
		}
	}
	printf("数字%d个，空格%d个，小写字母%d个，大写字母%d个。",s4,s1,s2,s3);
return 0;
}


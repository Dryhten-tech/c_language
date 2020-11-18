#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct student
{
	int stu_id;
	char stu_class[20];
	char stu_name[20];
	int stu_age;
	float stu_score;
}st1,st2,st3,st4,st5;
int main()
{
	
	student st1 = {10001,"HZ1101","XiaoMing",15,100};
	student st2 = st1;
	
	printf("%s\n",st1.stu_name);
	printf("%s\n",st1.stu_id);
	st2.stu_name;
	return 0;
}

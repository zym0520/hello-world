#include<stdio.h>
int main(void)
{
	int n;
	printf("请输入年份：");
	scanf("%d",&n);
	if(n % 100 == 0)
	{
		if (n % 400 ==0) printf("这年是闰年");
		else printf("这年不是闰年"); 
	}
	else
	{
		if(n % 4 == 0) printf("这年是闰年");
		else printf("这年不是闰年"); 
	}
	return 0;
 } 

#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b;
	printf("请输入一个整数："); 
	scanf("%d",&a);
	b = sqrt(a);
	int i = 2;
	int x = 0;
	while(i <= b)
	{
		if(a % i == 0) x++;
		i++;
	}
	if(x > 0) printf("这个数不是素数");
	else printf("这个数是素数");
	return 0;
}

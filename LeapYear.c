#include<stdio.h>
int main(void)
{
	int n;
	printf("��������ݣ�");
	scanf("%d",&n);
	if(n % 100 == 0)
	{
		if (n % 400 ==0) printf("����������");
		else printf("���겻������"); 
	}
	else
	{
		if(n % 4 == 0) printf("����������");
		else printf("���겻������"); 
	}
	return 0;
 } 

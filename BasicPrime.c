#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b;
	printf("������һ��������"); 
	scanf("%d",&a);
	b = sqrt(a);
	int i = 2;
	int x = 0;
	while(i <= b)
	{
		if(a % i == 0) x++;
		i++;
	}
	if(x > 0) printf("�������������");
	else printf("�����������");
	return 0;
}

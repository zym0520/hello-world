#include<stdio.h>
#include<math.h>
 int main(void)
{
	int m,x;
	scanf("%d",&m);
	x = m;
	int n = 0;
	do
	{
		x = x / 10;
		n++;
	}while(x != 0);
	int a[n];
	a[0] = m / pow(10,(n - 1));
	int i = 1;
	while(i < n)
	{
		a[i] = m / pow(10,(n - i - 1)); 
		a[i] = a[i] % 10; 
		i++;
	}
	int b = 0;
	i = n - 1;
	while(i >= 0)
	{
		printf("%d ",a[i]);
		i--;
	}
	return 0;
}

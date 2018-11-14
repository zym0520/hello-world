#include<stdio.h>
#include<math.h>
int pleacon(int x)
{
	int y = sqrt(x);
	int z = 2;
	int w = 0;
	while(z <= y)
	{
		if(x % z == 0) w++;
		z++;
	}
	return w;
 } 
 int main(void)
 {
 	int i = 100;
 	while(i <= 999)
 	{
 		int a = i / 100;
 		int b = i / 10 % 10;
 		int c = i % 10;
 		int sum1 = a + b + c;
 		int sum2 = a*a + b*b + c*c;
 		int product = a*b*c;
 		if(pleacon(i) == 0 && pleacon(sum1) == 0 && pleacon(sum2) == 0 && pleacon(product) == 0)
 		printf("%d ",i);
 		i++;
	 }
	 return 0;
 }

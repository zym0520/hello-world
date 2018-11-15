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
 	int i = 100,product;
 	while(i <= 9999)
 	{
 		int a = i / 1000;
 		int b = i / 100 % 10;
 		int c = i / 10 % 10;
 		int d = i % 10;
 		int sum1 = a + b + c +d;
 		int sum2 = a*a + b*b + c*c + d*d;
 		if (a == 0) product = b * c *d;
 		else product = a * b * c *d;
 		if(pleacon(i) == 0 && pleacon(sum1) == 0 && pleacon(sum2) == 0 && pleacon(product) == 0)
		 printf("%d ",i);
 		i++;
	 }
	 return 0;
 }

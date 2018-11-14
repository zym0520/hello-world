#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,d,x1,x2;
	puts("请输入方程系数。"); 
	printf("请输入a的值:"); scanf("%lf",&a);
	printf("请输入b的值:"); scanf("%lf",&b);
	printf("请输入c的值:"); scanf("%lf",&c);
	d=b*b - (4*a*c);
	if(d < 0) printf("该方程无解");
	else{
		x1=(sqrt(d) - b) / (2*a);
		x2=-(sqrt(d) + b) / (2*a);
		if(d == 0)
			printf("该方程组有唯一解：x1=x2=%.3f",x1);
		else{
			printf("x1=%.3f\n",x1);
			printf("x2=%.3f",x2);
		}
	} 
	return 0;
}


#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,d,x1,x2;
	puts("�����뷽��ϵ����"); 
	printf("������a��ֵ:"); scanf("%lf",&a);
	printf("������b��ֵ:"); scanf("%lf",&b);
	printf("������c��ֵ:"); scanf("%lf",&c);
	d=b*b - (4*a*c);
	if(d < 0) printf("�÷����޽�");
	else{
		x1=(sqrt(d) - b) / (2*a);
		x2=-(sqrt(d) + b) / (2*a);
		if(d == 0)
			printf("�÷�������Ψһ�⣺x1=x2=%.3f",x1);
		else{
			printf("x1=%.3f\n",x1);
			printf("x2=%.3f",x2);
		}
	} 
	return 0;
}


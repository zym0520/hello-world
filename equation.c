#include<stdio.h>
main(void)
{
	double a,b,c,d,e,f;
	printf("�������һ�鷽�̵Ĳ�����"); scanf("%lf%lf%lf",&a,&b,&c);
	printf("������ڶ��鷽�̵Ĳ�����"); scanf("%lf%lf%lf",&d,&e,&f);
	if(a*e == d*b)
	{
		if(a*f == d*c) printf("�÷�����������⡣");
		else printf("�÷������޽⡣") ;
	}
	else
	{
		double x = (c*e - b*f) / (a*e - b*d);
		double y = (a*f - d*c) / (a*e - b*d);
		printf("x=%.3f\ny=%.3f",x,y);
	}
	return 0;
}

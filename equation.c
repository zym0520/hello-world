#include<stdio.h>
main(void)
{
	double a,b,c,d,e,f;
	printf("请输入第一组方程的参数："); scanf("%lf%lf%lf",&a,&b,&c);
	printf("请输入第二组方程的参数："); scanf("%lf%lf%lf",&d,&e,&f);
	if(a*e == d*b)
	{
		if(a*f == d*c) printf("该方程组有无穷解。");
		else printf("该方程组无解。") ;
	}
	else
	{
		double x = (c*e - b*f) / (a*e - b*d);
		double y = (a*f - d*c) / (a*e - b*d);
		printf("x=%.3f\ny=%.3f",x,y);
	}
	return 0;
}

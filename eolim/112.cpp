#include <cstdio>

int main()
{
	double t1, t2, t3;
	scanf("%lf %lf %lf", &t1, &t2, &t3);
	double res=1/((1/t1)+(1/t2)+(1/t3));
	printf("%.2f", res);
	return 0;
}
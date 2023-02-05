#include <cstdio>
#include <cmath>

int main()
{
	int n;
	double res;
	scanf("%d", &n);
	res = 2 * n + floor(sqrt(n)) + ceil(n / floor(sqrt(n)));
	printf("%.0f", res);
	return 0;
}
#include <cstdio>

int main()
{
	int n;
	double num;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lf", &num);
		printf("%.10f", num/6);
	}
	return 0;
}
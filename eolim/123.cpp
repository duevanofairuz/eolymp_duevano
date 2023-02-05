#include <cstdio>
 
int main()
{
    long long n, con=0;
	scanf("%lld", &n);
    for (long long i = 5; n / i >= 1; i *= 5) con += n / i;
    printf("%lld", con);
    return 0;
}
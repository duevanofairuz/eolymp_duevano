#include <stdio.h>

int main()
{
    long int n, m=0;
    scanf("%ld", &n);
    for(int i=1; i<=n; i++){
        if(n/i == n%i) m++;
    }
    printf("%ld", m);
    return 0;
}
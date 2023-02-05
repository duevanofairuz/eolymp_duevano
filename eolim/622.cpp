#include <cstdio>

int main()
{
    int n, r=0;
    scanf("%d", &n);
    while(n){
        r=r+(n%2);
        n=n/2;
    }
    printf("%d", r);
    return 0;
}
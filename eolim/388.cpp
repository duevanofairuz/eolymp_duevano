#include <cstdio>
using namespace std;

int main()
{
    int n, cost=0;
    scanf("%d", &n);
    while(1){
        if(n==1) break;
        if(n%2==0) n/=2;
        else n+=1;
        cost++;
    }
    printf("%d", cost);
    return 0;
}
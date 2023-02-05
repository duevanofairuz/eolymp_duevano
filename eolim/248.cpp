#include<stdio.h>
using namespace std;

int main()
{
    int n, sum;
    while(scanf("%d", &n) != EOF){
        sum=1;
        for(int i=1; i<=n; i++){
            sum=sum+(2*i);
        }
        printf("%d\n", sum);
    }
    return 0;
}
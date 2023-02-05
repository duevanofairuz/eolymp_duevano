#include<stdio.h>
using namespace std;

int main(){
    int a,m,n = 0;
    scanf("%d %d", &a, &m);
    while (m){
        n++;
        if (m == a*2) break;
            m-=a;
            a++;
    }
    printf("%d", n);
    return 0;
}
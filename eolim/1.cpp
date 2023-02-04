#include <cstdio>

int main()
{
    int arr[180], n, i=0;
    while(scanf("%d", &n) != EOF){
        i=0;
        arr[i+1]=n%10;
        arr[i]=n/10;
        printf("%d %d", arr[i], arr[i+1]);
        i++;
    }
    return 0;
}
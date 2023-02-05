#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int con;
    long long int n;
    while (scanf("%lld", &n) != EOF){
        con=0;
        if(n%10==0){
            printf("1\n");
        }else{
            while(n!=0){
                con++;
                n/=10;
            }
            printf("%d\n", con);
        }
    }
    return 0;
}
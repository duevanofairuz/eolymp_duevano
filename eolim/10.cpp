#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    double rsum;
    while(scanf("%d", &N) != EOF){
        if(N==2){
            printf("1\n");
        }else{
            rsum=0;
            for(float i=N; i>=1; i--){
                rsum= rsum+(1/i);
                if(rsum>=0.5){
                    printf("%.0f\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}
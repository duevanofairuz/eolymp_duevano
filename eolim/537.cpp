#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int N, sum=0, erei[7], con;
    bool cek[50];
    while(scanf("%d", &N) != EOF){
        if(N==0) break;
        con=0;
        for(int i=0; i<N; i++){
            for(int i=1; i<=6; i++){
                scanf("%d", &erei[i]);
                if(cek[erei[i]]==0){
                    cek[erei[i]]=1;
                    con++;
                }
            }
        }
        if(con==49) printf("Yes\n");
        else printf("No\n");
        for(int j=0; j<=49; j++){
            cek[j]=0;
        }
    }
    return 0;
}
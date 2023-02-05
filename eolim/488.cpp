#include <cstdio>

int main()
{
    int n, con, contemp;
    scanf("%d", &n);
    con=0;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(int j=1; j<=n; j++){
                con++;
                printf("%d ", con);
            }
        }else{
            con+=n;
            contemp=con;
            for(int j=1; j<=n; j++){
                printf("%d ", contemp);
                contemp--;
            }
        }
        printf("\n");
    }
    return 0;
}
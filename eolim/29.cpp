#include <cstdio>

int main()
{
    long long int m, n, tempm, tempn, con=0, digit;
    scanf("%lld", &m); //865
    while(1){
        tempm=m;
        tempn=0;
        digit=0;
        while(m){
            n=m%10;
            tempn=(tempn*10)+n;
            m/=10;
            digit++;
        }
        m=tempm;
        n=tempn;
        if(n==m || digit==1) break;
        else{
            m=m+n;
            con++;
        }
    }
//    if(con==0 && digit>1) con++;
    printf("%lld", con);
    return 0;
}
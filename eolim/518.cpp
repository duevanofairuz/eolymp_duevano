#include <cstdio>
#include <cstring>
using namespace std;

int getNum(){
    int res=0;
    char c;
    int b=0;
    while(1){
        c=getchar_unlocked();
        if(c=='-')b=1;
        if(c==' ' || c=='\n')continue;
        else break;
    }
    if(c!='-')res=c-'0';
    while(1){
        c=getchar_unlocked();
        if(c>='0' && c<='9')res=10*res+c-'0';
        else break;
    }
    if(b==1)res*=-1;
    return res;
}

int main()
{
    int t, a, b;
    t=getNum();
    for(int i=0; i<t; i++){
        a=getNum();
        b=getNum();
        printf("%d\n", a+b);
    }
    return 0;
}
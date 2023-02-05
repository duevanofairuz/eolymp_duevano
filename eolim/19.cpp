#include <cstdio>
#include <cstring>
#include <algorithm>

int main()
{
    int ns, con=0;
    char n[11];
    scanf("%s", n);
    ns=strlen(n);
    if(ns%2!=0) con++;
    for(int i=0; i<ns/2; i++){
        if(n[i]==n[ns-1-i]) con++;
    }
    printf("%d", con);
    return 0;
}
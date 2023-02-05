#include <cstdio>

int main()
{
    int t, k;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &k);
        if(k==1 || k%3==1) printf("VGC\n");
        else if(k==2 || k%3==2) printf("CVG\n");
        else if(k==3 || k%3==0) printf("GCV\n");
    }
    return 0;
}
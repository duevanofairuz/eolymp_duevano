#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int getnum(){
	int res=0;
	char c;
	int b=0;
	while (1){
		c=getchar_unlocked();
		if (c == '-') b=1;
		if (c==' ' || c=='\n') continue;
		else break;
	}
	if(c != '-') res=c-'0';
	while(1){
		c=getchar_unlocked();
		if (c >= '0' && c<= '9') res=10 * res + c - '0';
		else break;
	}
	if (b==1) res *= -1;
	return res;
}

int main()
{
    int n, k, sum[101];
    for(int a=0; a<101; a++){
        sum[a]=0;
    }
    n=getnum();
    int c[n+1];
    for(int i=1; i<=n; i++){
        c[i]=getnum();
    }
    k=getnum();
    int p[k+1];
    for(int j=1; j<=k; j++){
        p[j]=getnum();
    }
    for(int l=1; l<=n; l++){
        for(int m=1; m<=k; m++){
            if(p[m]==l) sum[l]++;
        }
    }
    for(int o=1; o<=n; o++){
        if(sum[o]>c[o]) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
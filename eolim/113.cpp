#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n, r;
	scanf("%d", &n);
	int num[10]={0};
	for(int i=1; i<=n; i++){
		scanf("%d", &r);
		num[r]++;
	}
	int maxn=-1;
	for(int i=1; i<=9; i++){
		maxn=max(maxn, num[i]);
	}
	printf("%d", n-maxn);
	return 0;
}
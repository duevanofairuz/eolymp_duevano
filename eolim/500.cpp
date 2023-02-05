#include <cstdio>

int main()
{
	int n, l, w, h;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int sum=0, res;
		scanf("%d %d %d", &l, &w, &h);
		sum+=(l*h*2);
		sum+=(w*h*2);
		if(sum%16!=0) printf("%d\n", (sum/16)+1);
		else printf("%d\n", sum/16);
	}
	return 0;
}
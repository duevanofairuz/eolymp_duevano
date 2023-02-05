#include <cstdio>
#include <queue>
using namespace std;

int main()
{
	int n;
	priority_queue<int> pq;
	for(int i=0; i<3; i++){
		scanf("%d", &n);
		pq.push(n);
	}
	pq.pop();
	printf("%d", pq.top());
	return 0;
}
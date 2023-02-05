#include <cstdio>

int main()
{
	int h1, h2, m1, m2, s1, s2;
	int detik1, detik2, detikres, jam, menit;
	scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
	detik1= (h1*3600)+(m1*60)+s1;
	detik2= (h2*3600)+(m2*60)+s2;
	detikres= detik2-detik1;
	menit=detikres/60;
	jam=menit/60;
	menit-=(jam*60);
	printf("%d %d %d", jam, menit, detikres%60);
	return 0;
}
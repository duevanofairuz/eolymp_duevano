#include <cstdio>

int main()
{
	int n, m;
	scanf("%d", &n);
	if(n<10) printf("%d", n);
	else if(n>=10 && n<190){
		if((n%2)==0) printf("0");
		else{
			m=((n-9)/2)+9;
			printf("%d", m);
		}
	}else if(n>=190 && n<2890){
		if((n-189)%3!=0) printf("0");
		else{ 
			m=((n-189)/3)+99;
			printf("%d", m);
		}
	}else{
		if((n-2889)%4!=0) printf("0");
		else{
			m=((n-2889)/4)+999;
			printf("%d", m);
		}
	}
	return 0;
}
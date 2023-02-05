#include <cstdio>
int main(){ int n,p=0; scanf("%d", &n); for(int i=0; i<=9; i++) for(int j=0; j<=9; j++) for(int k=0; k<=9; k++) if(i+j+k==n) p++; printf("%d", p*p); }
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n, sum, r;
    scanf("%d", &n);
    sum=0;
    if(n==0){
        sum+=6;
    }else{
        while(n!=0){
            r=n%10;
            switch(r){
            case 0:
                sum+=6;
                break;
            case 1:
                sum+=2;
                break;
            case 2:
                sum+=5;
                break;
            case 3:
                sum+=5;
                break;
            case 4:
                sum+=4;
                break;
            case 5:
                sum+=5;
                break;
            case 6:
                sum+=6;
                break;
            case 7:
                sum+=3;
                break;
            case 8:
                sum+=7;
                break;
            case 9:
                sum+=6;
                break;
            default:
                break;
            }
            n/=10;
        }
    }
    printf("%d", sum);
    return 0;
}
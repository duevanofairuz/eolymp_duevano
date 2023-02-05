#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double s1, s2, s3, p1, p2, p3, sum;
    scanf("%lf %lf %lf", &s1, &s2, &s3);
    p1= pow((sqrt(s1)+sqrt(s2)),2)-s1-s2;
    p2= pow((sqrt(s1)+sqrt(s3)),2)-s1-s3;
    p3= pow((sqrt(s2)+sqrt(s3)),2)-s2-s3;
    sum=s1+s2+s3+p1+p2+p3;
    printf("%.8f", sum);
    return 0;
}
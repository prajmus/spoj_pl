#include <cstdio>
#include <cmath>
int main()
{
    double r,d;
    scanf("%lf %lf", &r, &d);
    double re=r*r-(d/2)*(d/2);
    printf("%.2f\n", 3.141592654*re);
    return 0;
}

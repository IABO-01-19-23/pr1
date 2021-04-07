#include<stdio.h>
#include<math.h>

//вариант 8

int main()
{
    float t = 0.5, z = 6;
    double y = t + 2 * (1/tan(z));
    double x = 3 * pow(y,2)/(4*tan(z)-2*pow(t,2));
    printf("y=%f, x=%f",y,x);
    return 0;
}

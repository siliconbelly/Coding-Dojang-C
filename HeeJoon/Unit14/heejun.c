// 14.5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
 
int main()
{
    float diameter;
    float radius;
    float area;
 
    scanf("%f", &diameter);
    radius = diameter / 2;
    area = M_PI * radius * radius;
    printf("%f\n", area);
 
    return 0;
}

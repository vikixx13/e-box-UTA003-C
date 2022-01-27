#include<stdio.h>
float calcarea(float x);
int main()
{
    float r, area;
    scanf("%f",&r);
    area=calcarea(r);
    printf("The area of the circle is %0.2f ",area);
    return 0;
}

float calcarea(float x)
{
    float area=3.14*x*x;
    return area;
}
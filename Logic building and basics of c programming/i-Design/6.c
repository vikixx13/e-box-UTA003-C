#include <stdio.h>
#include <math.h>
int main()
{
    int a, b,c;
    double d, r1,r2;
    printf("Enter the values of a,b,c :\n");
    scanf("%d\n%d\n%d",&a,&b,&c);

    d = (b * b) - (4 * a * c);
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);
    printf("The roots are:\nroot1 = %0.1lf\nroot2 = %0.1lf",r1,r2);
    return 0;
}
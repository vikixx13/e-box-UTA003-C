#include <stdio.h>
int main()
{
    int n, a[15], i, s = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        {
            s = s + a[i]; 
        }
    }
    printf("The sum of the even numbers in the array is %d", s);
    return 0;
}
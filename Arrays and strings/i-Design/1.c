#include <stdio.h>
int main()
{
    int n, a[15], i, s = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s = s + a[i]; 
    }
    printf("The sum of the elements in the array is %d", s);
    return 0;
}
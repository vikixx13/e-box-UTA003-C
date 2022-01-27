#include <stdio.h>
int main()
{
    int n, ar[15], a;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &a);
    for(int i = 0; i < n; i++)
    {
        if (ar[i] == a)
        {
            printf("%d is present in the array", a);
            return 0;
        }
    }
    printf("%d is not present in the array", a);
    return 0;
}
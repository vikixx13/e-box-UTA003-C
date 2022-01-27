
#include <stdio.h>
int main(){
    int s, t, left,n;
    printf("Number of students:\n");
    scanf("%d", &s);
    printf("Number of teams:\n");
    scanf("%d", &t);
    left = s % t;
    n= s/t;
    printf("The number of students in each team is %d and left out is %d", n,left);
    return 0;
}
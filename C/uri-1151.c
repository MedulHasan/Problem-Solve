#include <stdio.h>
int main()
{
    int a, i, j, sum = 0, x[100];
    scanf("%d", &a);
    x[0] = 0;
    x[1] = 1;
    for(i = 2; i < a; i++) {
        x[i] = x[i-1] + x[i-2];
    }
    for(j = 0; j < a; j++) {
        printf("%d \n", x[j]);
    }
    printf("\n");
    return 0;
}

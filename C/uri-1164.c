#include <stdio.h>
int main()
{
    int a, b, c, i, j;
    scanf("%d", &a);
    for(i = 1; i <= a; i++) {
        scanf("%d", &b);
        int sum = 0;
        for(j = 1; j < b; j++) {
            if(b % j == 0) {
                sum = sum + j;
            }
        }
        if(sum == b) {
            printf("%d eh perfeito\n", b);
        } else {
            printf("%d nao eh perfeito\n", b);
        }
    }
    return 0;
}

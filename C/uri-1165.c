#include <stdio.h>
int main()
{
    int a, n, i, j, count = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &a);
        for(j = 2; j < a; j++) {
            if(a % j == 0) {
                count = 1;
            }
        }
        if(count == 1) {
            printf("%d nao eh primo\n", a);
        } else {
            printf("%d eh primo\n", a);
        }
        count = 0;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    float r;
    scanf("%d %d", &a, &b);
    if(a == 1) {
        r = 4.00 * b;
    } else if (a == 2) {
        r = 4.50 * b;
    } else if (a == 3) {
        r = 5.00 * b;
    } else if (a == 4) {
        r = 2.00 * b;
    } else if (a == 5) {
        r = 1.50 * b;
    }
    printf("Total: R$ %.2f", r);
    return 0;
}

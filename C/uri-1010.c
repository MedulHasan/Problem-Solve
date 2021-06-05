#include <stdio.h>
int main()
{
    int a1, a2, b1, b2;
    float c1, c2, result, r1, r2;
    scanf("%d %d %f", &a1, &b1, &c1);
    scanf("%d %d %f", &a2, &b2, &c2);
    r1 = b1 * c1;
    r2 = b2 * c2;
    result = r1 + r2;
    printf("VALOR A PAGAR: R$ %.2f\n", result);
    return 0;
}

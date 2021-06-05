#include <stdio.h>
int main()
{
    int a1, c1;
    float result;
    scanf("%d %d", &a1, &c1);
    result = (a1 * c1);
    result = result / 12;
    printf("%.3f\n", result);
    return 0;
}


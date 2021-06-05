#include<stdio.h>
int main()
{
    float a, b, c, r2;
    scanf("%f %f %f", &a, &b, &c);
    if(a + b > c && b + c > a && c + a > b) {
        printf("Perimetro = %.1f", a + b + c);
    } else {
        r2 = ((a + b) / 2) * c;
        printf("Area = %.1f", r2);
    }
    return 0;
}

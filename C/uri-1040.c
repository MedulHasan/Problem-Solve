#include<stdio.h>
int main()
{
    double a, b, c, d, e, r, r2;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    r = ((a*2) + (b*3) + (c * 4) + (d * 1)) / 10;
    printf("Media: %.1lf\n", r);
    if(r >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    else if(r < 5.0) {
        printf("Aluno reprovado.\n");
    }
    if(6.9 > r > 5) {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1lf\n", e);
        r2 = (r + e) / 2;
        if(r2 >= 5.0) {
            printf("Aluno aprovado.\n");
        }
        else if(r2 <= 4.9) {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", r2);
    }
    return 0;
}

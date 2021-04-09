#include <stdio.h>
int natural_number, mod, a, m;

int f(int n) {
    int b = 0;
    while(n > 0) {
       mod = n % 10;
       n = n / 10;
       a = mod * mod;
       b = b + a;
    }
    //printf("%d\n", b);
    if(b == 1) {
       printf("NO CYCLE");
       //return "NO CYCLE";
    }
    else if(b == n) {
       printf("FULL CYCLE");
       //return "FULL CYCLE";
    }
    else {
        f(b);
    }
}

void main() {
    scanf("%d", &natural_number);
    f(natural_number);
}

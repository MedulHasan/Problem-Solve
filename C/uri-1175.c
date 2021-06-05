#include <stdio.h>
int main ()
{
    int i, j, a, temp;
    int N[6];
    for(i = 0; i < 6; i++){
        scanf("%d", &N[i]);
    }
    for(i = 0; i < 6 ; i--) {
        j = 5;
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
        j--;
    }
    for(i = 0; i < 6; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}

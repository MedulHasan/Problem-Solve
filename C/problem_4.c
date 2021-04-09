#include<stdio.h>
int main(){
    int n, i, j, res = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            res = res + j;
        }
    }
    printf("%d", res);
}

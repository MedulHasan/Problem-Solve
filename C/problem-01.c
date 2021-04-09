#include<stdio.h>
#include <math.h>
#define MAX_SIZE 1000

int main() {
    int arr[MAX_SIZE];
    long long int n;
    int i, m, result = 0, r;
    scanf("%lld", &n);
    scanf("%d", &m);

    for(i=0; i<m; i++){
        scanf("%d", &arr[i]);
        r = n / pow(10, arr[i]);
        r = r % 10;
        printf("%d", r);
    }

    /*for(i=0; i<m; i++)
    {
        printf("%d", arr[i]);
    }*/

}



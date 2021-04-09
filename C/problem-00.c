#include<stdio.h>
#define MAX_SIZE 1000
int main() {
    int arr[MAX_SIZE];
    int i, N, result = 0, p = 0;
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);

    }
    for(i=0;i<N;i++){
        if(i%2==1){
            result = result + arr[i];
        }
    }
    for(i=1; i<result; i++) {
        if(result%i == 0){
            p++;
        }
    }
    if(p==1) {
        printf("Sum of all elements is a prime number");
    } else {
        printf("Sum of all elements is not a prime number");
    }
}


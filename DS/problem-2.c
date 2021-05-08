
#include<stdio.h>

int main() {
    int N, M, i, first, last, middle;
    long long int n[10000], m[10000], s;
    scanf("%d %d", &N, &M);

    for(i = 0; i < N; i++) {
        scanf("%lld", &n[i]);
    }

     for(i = 0; i < M; i++) {
        scanf("%lld", &m[i]);
    }

    for(i=0; i<M; i++) {
        first = 0;
        last = N - 1;
        middle = (first + last) / 2;
        while (first <= last) {
          if (n[middle] < m[i]) {
            first = middle + 1;
          }
          else if (n[middle] == m[i]) {
             printf("YES %d\n", middle+1);
             break;
          }
          else {
            last = middle - 1;
          }
          middle = (first + last)/2;
       }
       if (first > last) {
        printf("NO\n");
       }
    }

   return 0;

}

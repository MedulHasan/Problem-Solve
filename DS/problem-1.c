#include<stdio.h>
int main() {
   int a[1000], i, N, smallestNumber, largestNumber, gcd;

   printf("\nN :");
   scanf("%d", &N);

   for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
   }

   smallestNumber = a[0];

   for (i = 0; i < N; i++) {
      if (a[i] < smallestNumber) {
         smallestNumber = a[i];
      }
   }
    largestNumber = a[0];
   for (i = 0; i < N; i++) {
      if (largestNumber < a[i]) {
         largestNumber = a[i];
      }
   }

   for(i=1; i <= smallestNumber && i <= largestNumber; ++i)
    {
        if(smallestNumber%i==0 && largestNumber%i==0) {
            gcd = i;
        }
    }

   printf("\nSmallest: %d\n", smallestNumber);
   printf("largest: %d\n", largestNumber);
   printf("GCD: %d\n", gcd);

   return 0;
}

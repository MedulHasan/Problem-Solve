#include <stdio.h>
long long int n, m, res, mod;

int fun(int m){
    m = m % 1000000007;
    mod = (m*(m+1))/2;
    res = mod % 1000000007;
    printf("%lld ", res);
}

void main(){
    scanf("%lld", &n);
    fun(n);

}

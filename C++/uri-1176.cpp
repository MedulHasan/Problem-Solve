#include <iostream>
using namespace std;

int main(){
    int n, i, f, j;
    long long N[61];
    cin >> n;
    N[0] = 0;
    N[1] = 1;
    for(i = 2; i < 61; i++) {
        N[i] = N[i-1] + N[i-2];
    }
    for(j = 0; j < n; j++) {
        cin >> f;
        cout << "Fib(" << f <<") = " << N[f] << endl;
    }
    return 0;
}

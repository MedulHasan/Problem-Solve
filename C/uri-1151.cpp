#include <iostream>
using namespace std;
int main()
{
    int a, i, N[46];
    cin >> a;
    N[0] = 0;
    N[1] = 1;
    cout << N[0] <<" " << N[1] << " ";
    for(i = 2; i < a; i++) {
        N[i] = N[i-1] + N[i - 2];
        if(i == (a-1)) {
            cout << N[i];
        } else {
            cout << N[i] << " ";
        }
    }
    cout << "\n";
    return 0;
}

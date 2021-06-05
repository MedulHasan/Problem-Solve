#include<iostream>
using namespace std;
int main()
{
    int a, n, i, j = 0;
    cin >> a >> n;
    while(n <= 0) {
        cin >> n;
    }
    for(i = 0; i < n; i++) {
        j = a + j + i;
    }
    cout << j;
}

#include<iostream>
using namespace std;
int main()
{
    int a, x, y, i, j, maximum, minimum, sum;
    cin >> a;
    for(i = 0; i< a; i++) {
        cin >> x >> y;
        if(x < y) {
            maximum = y;
            minimum = x;
        } else {
            maximum = x;
            minimum = y;
        }
        sum = 0;
        for(j = minimum+1; j < maximum; j++) {
            if(j % 2 == 1) {
                sum += j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

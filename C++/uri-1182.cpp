#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int c, i, j;
    char t;
    float M[12][12], sum = 0.0, avg;

    cin >> c >> t;
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++){
            cin >> M[i][j];
        }
    }
    for(i=0;i<5;i++){
        sum = sum + M[i][c];
    }
    if(t == 'S') {
        cout << sum << endl;
    } else if(t =='M') {
        avg = sum / c;
        cout << avg << endl;
    }

    return 0;
}

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i, j, n = 3;
    char t;
    float M[12][12], sum = 0.0, avg;

    cin >> t;
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++){
            cin >> M[i][j];
        }
    }
    for(i=3;i>=1;i--){
        for(j=0;j<n;j++) {
            sum = sum + M[i][j];
            //cout << "M["<<i<<"]["<<j<<"]="<<M[i][j]<<"\n";
        }
        n--;
    }
    if(t == 'S') {
        printf("%.1f\n", sum);
    } else if(t =='M') {
        avg = sum / 6.0;
        printf("%.1f\n", avg);
    }

    return 0;
}



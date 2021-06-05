#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i, j, n =1;
    char t;
    float M[12][12], sum = 0.0, avg;

    cin >> t;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++){
            cin >> M[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=1;j<=3;j++) {
            sum = sum + M[i][j];
        }
        //n++;
    }
    if(t == 'S') {
        printf("%.1f\n", sum);
    } else if(t =='M') {
        avg = sum / 66.0;
        printf("%.1f\n", avg);
    }

    return 0;
}


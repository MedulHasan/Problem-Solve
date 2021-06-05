#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a=1;
    float n, avg, i = 0.0;
    while(true){
        cin >> n;
        if(n>=0 && n<=10) {
            i = i + n;
            if(a > 1) {
                break;
            }
            a++;
        } else {
           cout << "nota invalida\n";
        }
    }
    avg = i / 2.0;
    printf("media = %.2f\n", avg);
    return 0;
}

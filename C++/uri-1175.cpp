#include<iostream>
using namespace std;
int main()
{
    int a, i, temp;
    int N[20];
    for(i= 0; i < 20; i++) {
        cin >> N[i];
    }
    a = 19;
    for(i = 0; i < 10; i++) {
        temp = N[i];
        N[i] = N[a];
        N[a] = temp;
        a--;
    }
    for(i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    cout<<"\n";
    return 0;
}


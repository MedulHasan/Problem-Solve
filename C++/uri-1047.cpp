#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, x, y, hours, minute, div;
    cin >> a >> b >> c >> d;
    x = (a * 60) + b;
    y = (c * 60) + d;
    div = y - x;
    if(div <= 0) {
        div += 24*60;
    }
    hours = div / 60;
    minute = div % 60;
    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minute << " MINUTO(S)" << endl;
    return 0;
}

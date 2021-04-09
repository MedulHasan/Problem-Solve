#include <iostream>
#include<string>
using namespace std;
string input_string(string);
string input_string(string iniString) {
    char outString[999];
    int t = 0, d = 0;
    for(int i = 0; i < iniString.length(); i++) {
        outString[t] = iniString[i];
        outString[++t] = 1 + 48;
        if(iniString[i] != iniString[i+1]) {
            t++;
        }
        else {
            d = 1;
            int j = i;
            int count = 0;
            while(iniString[i] == iniString[j] && j < iniString.length()) {
                count++;
                j++;
            }
            i = j-1;
            if(count < 10) {
                char out = count + 48;
                outString[t] = out ;
                t++;
            }
            else if(count < 20) {
                char out1 = 1 + 48;
                char out2 = count - 10 + 48;
                outString[t] = out1;
                outString[t+1] = out2;
                t = t + 2;
            }
            else if(count < 30) {
                char out1 = 2 + 48;
                char out2 = count - 20 + 48;
                outString[t] = out1;
                outString[t+1] = out2;
                t = t + 2;
            }
            else if(count < 40) {
                char out1 = 3 + 48;
                char out2 = count - 30 + 48;
                outString[t] = out1;
                outString[t+1] = out2;
                t = t + 2;
            }

    }
    }
    if(d) return outString;
    else return iniString;
}
int main(int argc, char** argv) {
    string s;
    cout<<"Enter The String: ";
    cin>>s;
    cout<<"counts of repeated characters is: "<< input_string(s);
    return 0;
}

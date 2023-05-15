#include <iostream>
using namespace std;
int main(){
    int n;
     int d = 0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s[1]=='+') d++;
        if(s[1]=='-') d--;
    }
    cout << d;
}
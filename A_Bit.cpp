#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d=0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s[1]=='-') d--;
        else d++;
    }
    cout << d;
}
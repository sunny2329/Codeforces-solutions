#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s2;
        cin >> s2;
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        if(s2=="yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
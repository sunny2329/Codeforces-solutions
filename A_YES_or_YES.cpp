#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        string s1;
        cin >> s1;
        string s2 = "YES";

        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        if(s2 == s1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
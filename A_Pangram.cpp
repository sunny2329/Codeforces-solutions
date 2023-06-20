#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
       int n;
       cin >> n;
       string s;
       cin >> s;
       int c =0;
       if(n<26) cout << "NO" << endl;
       else {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        // cout << s;

        sort(s.begin(),s.end());
        for (int  i = 0; i < n; i++)
        {
         if(s[i]!=s[i+1]) c++;

        }
        if(c==26)cout << "YES" << endl;
        else cout << "NO" << endl;
        
       }

}
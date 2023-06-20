#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
       int t;
       cin >> t;
       int c=0,d=0;
       while(t--){
        int a,b;
        cin >> a >> b;
        if(a>b) c++;
        else if(b>a) d++;
       }
       if(c==d) cout << "Friendship is magic!^^";
       else if(c>d) cout << "Mishka";
       else cout << "Chris";

}
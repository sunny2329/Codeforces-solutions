#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
       int c,m;
       int h =0;
       int t = 0;
       cin >> c >> m;
       while(c!=0){
            c--;
            t++;

            if(t==m) {
                t= 0;
                c++;
            } 
            h++;
       }
    cout << h << endl;
}
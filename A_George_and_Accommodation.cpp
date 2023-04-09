#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d=0;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        int r = b-a;
        if(r>=2) d++;
    }
    cout << d;
}
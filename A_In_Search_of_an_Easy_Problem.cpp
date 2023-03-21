

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d=0;
    for (size_t i = 0; i < n; i++)
    {
        if(a[i]==1) d++;
    }
    if(d>0) cout << "HARD";
    else cout << "EASY";
}
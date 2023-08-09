#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int* r = new int[a];
    for(int i =0;i<a;i++){
        cin >> r[i];
    }
    sort(r,r+a);
    int ans =0;

    for(int i=0;i<b;i++){
        if(r[i]<0) ans = ans + abs(r[i]);
    }

    cout << ans;
    //oo
}
#include <bits/stdc++.h>

using namespace std;


int main(){
    int* a = new int[4];
    for(int i = 0;i<4;i++){
        cin >> a[i];
    }
    sort(a,a+4);
    int * ans = new int[3];
    for(int i=0;i<3;i++){
        ans[i] = a[3] - a[i];
    }
    for(int i =0;i<3;i++){
        cout << ans[i] << " ";
    }
}
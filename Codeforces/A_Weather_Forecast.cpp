#include <bits/stdc++.h>
using namespace std;
int main()
{

    float *a = new float[28];
    for(int i = 0;i<28;i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0;i<28;i++){
     if(a[i]>=0.8) ans++;
    }
    cout << ans << endl;
}
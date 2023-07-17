#include <bits/stdc++.h>
using namespace std;


int main()
{
    int s,n;
    cin >> s >> n;
    // cout << s << n;
    pair<int,int> *a = new pair<int,int>[n];
    int i =0;
    int m = n;
    while(n--){
        cin >> a[i].first >> a[i].second;
        i++;
    }
    sort(a,a+m);
    int c = 0;
    for(int i = 0;i<m;i++){
     if(s>a[i].first){
        s = s+a[i].second;
        c++;
     }else{
        break;
     }
    }
    if(c==m) cout << "YES";
    else cout << "NO";


}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int* a  = new int[n];
        int* b = new int[n-1];
        for(int i =0;i<n;i++){
            cin >> a[i];
        }

        for(int i=0;i<n-1;i++){
            int d = abs(a[i]-a[i+1]);
            b[i] = d;
        }

        sort(b,b+n-1);
        int ans = 0;
        for(int i=0;i<n-k;i++){
            ans = ans + b[i];
        }
        cout << ans << endl;
    }
	
}
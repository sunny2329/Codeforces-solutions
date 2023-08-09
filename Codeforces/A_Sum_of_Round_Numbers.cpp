#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  while(n--){
    int t;
    
    int c =0;
    cin >> t;

    int h = t;
    while(h!=0){
        int j = h%10;
        if(j!=0) c++;
        h=h/10;
    }
    cout << c << endl;
    int i = 0;
    while(t!=0){
       float r = t%10;
        float ans =0;
        ans = r*pow(10,i);

        
        if(ans!=0) {
            cout << ans << " ";
        }
        i++;
        t = t/10;

        

    }
    cout << endl;
  }
}
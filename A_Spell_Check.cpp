#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = "Timur";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout << "YES" << endl;
    else cout << "NO" << endl;
   }
}
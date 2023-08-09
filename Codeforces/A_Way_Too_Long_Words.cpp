#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
       string s;
       cin >> s;
       int r = s.length();
       if(r>10) cout << s[0] << r-2 << s[r-1] << endl;
       else cout << s << endl;

    }
}
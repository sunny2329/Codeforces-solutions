#include <iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   while(n--){
    int a,b,c,d;
    cin >> a >> b >> c >>d;
    int r = 0;
    if(a>b) r++;
    if(a>c) r++;
    if(a>d) r++;
    cout << 3-r << endl;
   }
}
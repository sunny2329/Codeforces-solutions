#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int d = 0;
   while(n--){
    int a,b,c;
    cin >> a >> b >> c;
    if((a+b+c)>1) d++;

   }
   cout << d;
}
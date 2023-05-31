#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin >> n;
   while(n--){
    int k;
    cin >> k;
    if(k<=1399) cout << "Division 4" << endl;
   else if(k<=1599) cout << "Division 3" << endl;
    else if(k<=1899) cout << "Division 2" << endl;
    else cout << "Division 1" << endl;
   }
}
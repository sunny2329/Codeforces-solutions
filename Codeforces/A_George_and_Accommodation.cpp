#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   int c = 0;
   cin >> n;
   while(n--){
    int a,b;
    cin >> a >> b;
    int r = b-a;
    if(r>=2) c++;
   }
   cout << c;
    
   
}
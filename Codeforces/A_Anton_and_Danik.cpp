#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   int c=0,d=0;
   for (int i = 0; i < s.length(); i++)
   {
    if(s[i]=='A') c++;
    else d++;
   }
   if(c>d) {
    cout << "Anton";
   }else if(c==d){
    cout << "Friendship";
   }
   else {
    cout << "Danik";
   }
   
   
}
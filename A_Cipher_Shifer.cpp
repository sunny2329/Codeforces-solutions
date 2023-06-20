#include <iostream>
#include <algorithm>
using namespace std;

int main(){
         int t;
         cin >> t;
         while(t--){
          int n;
          cin >> n;
          string s;
          cin >> s;
          
          string a;
          for (int i = 1; i < n; i++)
          {
           if(s[i]==s[0]){
            a+=s[0];
            s[0]=s[i+1];
            i++;
           }
          }
          cout << a << endl;
          

         }

}
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while(n--){
    int t;
    cin >> t;
    string s;
    cin >> s;
    int c = 2,d=0,e=0,f=0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]!=s[i+1]) d++;

        sort(s.begin(),s.end());
        if(s[i]=='<') e++;
        else f++;
        
        
    }
    int r = max(f,e) + 1 -d;
    cout << r << endl;
    
    
  }
}
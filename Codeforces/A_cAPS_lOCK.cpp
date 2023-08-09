#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;
  bool c = true;

   for(int i=1;i<s.length();i++){
        if(s[i] == tolower(s[i])){
            c = false;
        }
  }
    if(!c) {
        cout << s << endl;
    }else{
          
  for(int i=0;i<s.length();i++){
        if(s[i] == tolower(s[i])) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
  }
  cout << s << endl;
    }

}
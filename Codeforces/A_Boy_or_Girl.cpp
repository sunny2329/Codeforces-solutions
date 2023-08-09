#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

int main() {
        string s;
        cin >> s;
        int a = 0;
        sort(s.begin(),s.end());
        for (int  i = 0; i < s.length(); i++)
        {
            if(s[i]==s[i+1]) {
                a++;
            }
        }
        if((s.length()-a)%2==0) cout << "CHAT WITH HER!";
        else cout << "IGNORE HIM!";
}
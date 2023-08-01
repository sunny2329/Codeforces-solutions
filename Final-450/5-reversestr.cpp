#include <bits/stdc++.h>
using namespace std;


void reversestr(string &s){
    int i = 0,j=s.length();

    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}


int main()
{
    string s = "sobhit sinha";
    reversestr(s);
    cout << s;
}

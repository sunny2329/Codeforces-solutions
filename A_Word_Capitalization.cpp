#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

int main() {
        string s;
        cin >> s;
       s[0] = toupper(s[0]);
        cout << s;
}
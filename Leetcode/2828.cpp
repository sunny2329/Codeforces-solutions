#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    bool isacronym(vector<string>& words, string s){
        string h = "";
        int i = 0;
        int n = words.size();
        while(i<n){
            h.push_back(words[i][0]);
            i++;
        }
        return s==h;
    }
};


int main()
{

}
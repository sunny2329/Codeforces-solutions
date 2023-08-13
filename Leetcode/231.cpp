#include <bits/stdc++.h>
using namespace std;

class solution{
    bool ispoweroftwo(int n){
        for(int i = 0;i<=30;i++){
            int ans = pow(2,i);
            if(ans == n) return ans;
        }
        return false;
    }
};

int main()
{

}
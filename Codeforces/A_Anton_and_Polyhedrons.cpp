#include <bits/stdc++.h>

using namespace std;




int main(){
    int t;
    cin >> t;
    int ans = 0;
    map<string,int> shapes = {{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};

    while(t--){
        string s;
        cin >> s;
        ans = ans + shapes[s];


    }
    cout << ans << endl;
}
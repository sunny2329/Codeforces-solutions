#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int n = r-l+1;
        sort(arr,arr+n);
        
        return arr[k-1];
    }
};


int main()
{

}
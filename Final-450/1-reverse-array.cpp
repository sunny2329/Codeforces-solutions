#include <bits/stdc++.h>
using namespace std;

void reversearr(int arr[],int size){
    int i = 0,j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    reversearr(arr,6);
    for(int i = 0;i<6;i++){
     cout << arr[i] << " ";
    }

}
#include <bits/stdc++.h>
using namespace std;

int maxi(int arr[],int n)
{

    int maxi = arr[0];


    for (int i = 1; i < n; i++)
    {
        if(arr[i]>maxi) maxi = arr[i];
    }

    return maxi;
}

int mini(int arr[],int n)
{

    int mini = arr[0];


    for (int i = 1; i < n; i++)
    {
        if(arr[i]<mini) mini = arr[i];
    }

    return mini;
}

int main()
{
    int arr[] = {1,2,5,6,10,12,0,3};

    int n = maxi(arr,8);
    cout << n;
}
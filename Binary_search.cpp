#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int binarySearch(int arr[] , int n , int data){
   int mid = 0;
   int l = 0;
   int r = n-1;
    while(l<r){
        mid = (l+r)/2;
        //cout<<mid<<endl;
        if(data == arr[mid]){
            return mid;
        }
        else if (data<arr[mid])
        {
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, n , x);
    if(result == -1){
        cout<<"Number not present";
    }
    else{
        cout<<"Number present at"<<result;
    }
    return 0;
}
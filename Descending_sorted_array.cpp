#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int binarySearch(int arr[] , int n , int data){
   int mid = 0;
   int l = 0;
   int r = n-1;
    while(l<=r){
        mid = l + (r-l)/2; //integer overflow
        if(data == arr[mid]){
            return mid;
        }
        else if (data<arr[mid])
        {
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = { 20, 17, 15, 14, 13 , 12 , 10 , 9 , 8 , 4};
    int x = 4;
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
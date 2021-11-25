#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 6, 5, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < (n - j - 1); j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                flag = 1;
            }
        if (flag == 0)
                break;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k];
    }
}
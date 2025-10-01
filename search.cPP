//author: seema kumari patel   
//date: 01/10/2025
//purpose: to demonstrate the search algorithm in c++



#include<bits/stdc++.h>

void main ()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    // Linear Search
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }
    if (found)
        std::cout << "Element found using Linear Search" << std::endl;
    else
        std::cout << "Element not found using Linear Search" << std::endl;

}
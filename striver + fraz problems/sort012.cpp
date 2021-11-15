#include <bits/stdc++.h>
using namespace std;

// O(N) complixity
void sort012(vector<int> &arr, int n)
{
    //   Write your code here
    int low = 0;
    int mid = 0; // also you can assume as current element in teh array.
    int high = n - 1;

    // Eg : 1 0 0 2 1 2

    // 1 0 0 2 1 2
    // 0 1 0 2 1 2
    // 0 0 1 2 1 2
    // 0 0 1 2 1 2
    // 0 0 1 1 2 2

    while (mid <= high)
    {
        // cout << "check =" << arr[mid] << " " << mid << endl;
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }

    for (auto i = arr.begin(); i != arr.end(); ++i)
        cout << *i << " ";
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort012(arr, n);
        // cout << "ans = " << endl;
    }
    return 0;
}

/*

    O/P
============

1
6
1 0 0 2 1 2
check =1 0
check =0 1
check =0 2
check =2 3
check =2 3
check =1 3
0 0 1 1 2 2

*/
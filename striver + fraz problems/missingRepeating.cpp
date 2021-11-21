#include <bits/stdc++.h>

// Traverse array, mark visited as negative. If duplicate is present, it will be less than 0.
// Non visited index value will be greater than 0, so the index + 1 is the missing number.

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int, int> p;

    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] < 0)
        {
            p.second = abs(arr[i]);
        }
        else
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            p.first = i + 1;
        }
    }
    return p;
}
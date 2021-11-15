#include <bits/stdc++.h>
using namespace std;

// O(N^2) solution
int findDuplicate(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (temp == a[j])
                return a[j];
        }
    }
    return -1;
}

//  O(N * log(N))
int findDuplicateOp(vector<int> &a, int n)
{
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            return a[i];
    }
    return -1;
}

// O(N) - Floyd’s Tortoise and Hare Approach

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // int duplicateNumber = findDuplicate(a, n);
        int duplicateNumber = findDuplicateOp(a, n);
        cout << "ans = " << duplicateNumber << endl;
    }
    return 0;
}
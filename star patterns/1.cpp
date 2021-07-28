#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) // Loop runs through all rows
    {
        for (int j = 0; j <= i; j++) // what to do in each row
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}

//  *
//  * *
//  * * *
//  * * * *
//  * * * * *
//  * * * * * *
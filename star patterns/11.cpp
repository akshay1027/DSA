#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    // First half
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    // Second half
    for (int i = num; i > 0; i--) // Loop runs through all rows
    {
        for (int j = i; j > 0; j--) // loop starts from i and decrements till 1 ( j > 0)
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
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *
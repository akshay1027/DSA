#include <bits/stdc++.h>
using namespace std;

int main()
{
    char binary[8];

    for (int i = 0; i < 8; i++)
    {
        cin >> binary[i];
    }
    cout << endl;

    for (int i = 0; i < 8; i++)
    {
        if (binary[i] == 0)
            cout << 1 << " ";

        else
            cout << 0 << " ";
    }
    cout << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, firstDigit, lastDigit;

    cout << "Enter number to be processed = ";
    cin >> num;

    lastDigit = num % 10;

    for (int i = num; num != 0; i--)
    {
        firstDigit = num % 10;
        num = num / 10;
    }

    cout << "sum of first and last digit = " << firstDigit + lastDigit << endl;

    return 0;
}
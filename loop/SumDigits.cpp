#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, sum = 0, lastDigit;

    cout << " enter number to be processed = ";
    cin >> num;

    for (int i = num; num != 0; i--)
    {
        lastDigit = num % 10;
        sum = sum + lastDigit;
        num = num / 10;
    }

    cout << " Sum of Digits of entered number = " << sum << endl;

    return 0;
}

//  o/p :

//  enter number to be processed = 345
//  Sum of Digits of entered number = 12
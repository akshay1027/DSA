#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of digits = ";
    cin>> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int i=0;
    while(i<n) 
    {
        cout<<a[i]<< " ";
        i++;
    }

    cout<<endl;
    return 0;
}
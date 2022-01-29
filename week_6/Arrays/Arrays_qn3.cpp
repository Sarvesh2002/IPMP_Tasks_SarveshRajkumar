#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[20];
    int i;
    int n;
    cin>>n;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    int b = ((n+1)*(n+2))/2 - sum;
    cout<<"Missing Element is "<<b;
}
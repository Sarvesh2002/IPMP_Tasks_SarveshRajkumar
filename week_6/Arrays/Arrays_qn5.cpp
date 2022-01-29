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
        
    }
    map<int,int> M;
    for(i=0;i<n;i++)
    M[a[i]]=0;
    for(i=0;i<n;i++)
    M[a[i]]++;
    cout<<"Odd Occurrences elements : \n";
    for(auto& x : M)
    {
        if(x.second %2 == 1)
        cout<<x.first<<" ";
    }
}
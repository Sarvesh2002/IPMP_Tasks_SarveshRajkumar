#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter N : ";
    int n;
    cin>>n;
    int a[n];
    int i , j , k , num;
    map <int , int> M;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag = 0;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            k = n-1;
            while(k!=j)
            {
                if(a[i]<a[j]&&a[j]<a[k])
                {
                    flag = 1;
                    break;
                }
                else
                k--;
            }
            if(flag == 1)
            break;
        }
        if(flag == 1)
        break;
    }
    if(i==n-2)
    cout<<"No Such Numbers exist";
    else
    cout<<"Numbers are "<<a[i]<<" "<<a[j]<<" "<<a[k]<<" at indices "<<i<<" "<<j<<" and "<<k;

}
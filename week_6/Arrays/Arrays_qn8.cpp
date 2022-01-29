#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[30];
    int i , j , n , k ;
    cin>>n;
    i=0;
    while(i<n)
    {
        cin>>a[i];
        i++;
    }
    sort(a ,a+n);
    j = 0;
    int sum , temp;
    cout<<"Enter Sum to check : \n";
    cin>>sum;
    k = n - 1;
    while(j!=k)
    {
        temp = a[j]+a[k];
        if(temp<sum)
        j++;
        else if(temp>sum)
        k--;
        else
        break;
    }
    if(j!=k)
    cout<<"The pair of Numbers are : "<<a[j]<<" and "<<a[k];
    else
    cout<<"Such pair does not exist !";
    
}
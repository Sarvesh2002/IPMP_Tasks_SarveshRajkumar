#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void palindrome( int a[20] , int n , int num)
{
    int i = 0;
    for(i=0;i<n/2;i++)
    {
        a[n-1-i]=a[i];
    }
    int pal = 0;
    for(i=0;i<n;i++)
    {
        pal+=a[i];
        pal*=10;
    }
    pal = pal /10;
    
    if(pal<=num)
    {
        if(n%2==1)
            pal+=pow(10,n/2);
        else
            pal = pal + pow(10,n/2) +  pow(10,n/2 - 1);
    }    
    cout<<pal;
}
int main()
{
    int a[20] = {0};
    int num;
    cin>>num;
    int i , nm = num;
    nm = nm + 1;
    for ( i = 0 ; nm!=0 ; i++ )
    {
        a[i] = nm%10;
        nm = nm/10;
    }
    reverse(a,a+i);
    palindrome(a , i , num);
}
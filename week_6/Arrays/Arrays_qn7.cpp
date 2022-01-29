#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
int permute ( int arr[20] , int n )
{
    int a[20];
    int i , j , k , min , max ;
    for(i=0;i<n;i++)
    a[i]=arr[i];
    int flag = 0;
    for(i = 2 ; i <= n ; i++ )
    {        
        max = 0;
        for( j = 0 ; j < i ; j++ )
        {
            if(a[j]>=a[max])
            {
                max = j;
            }
            else
            {
                flag = 1;
                break;
            }       
        }
        if(flag)
        break;
    }
    if(i==(n+1))
    return -1;
    int temp = a[j];
    sort(a,a+j+1);
    for(k = j ; k>=1 ; k-- )
    if(a[k-1]==temp)
    {
        swap(a[k],a[j]);
        break;
    }
    sort(a,a+j);
    reverse(a,a+j);
    reverse(a,a+n);
    int perm = 0;
    for(i=0;i<n;i++)
    {
        perm+=a[i];
        perm*=10;
    }
    perm = perm /10;
    return perm;
}

int main()
{
    int a[20] = {0};
    int num;
    cin>>num;
    int i , nm = num;
    for ( i = 0 ; nm!=0 ; i++ )
    {
        a[i] = nm%10;
        nm = nm/10;
    }
    int perm = permute(a , i);
    cout<<perm;
}
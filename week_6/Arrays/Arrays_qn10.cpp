#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[30];
    int i, j, n, k;
    cin >> n;
    i = 0;
    while (i < n)
    {
        cin >> a[i];
        i++;
    }
    sort(a, a + n);
    j = 1;
    int sum, temp;
    cout << "Enter Sum to check : \n";
    cin >> sum;
    k = n - 1;
    for (i = 0; i < n - 2; i++)
    {
        j=i+1;
        k = n-1;
        while (j != k)
        {
            temp = a[j] + a[k];
            if (temp < sum - a[i])
                j++;
            else if (temp > sum - a[i])
                k--;
            else
                break;
        }
        if(temp == sum - a[i])
        break;
    }
    if (j != k)
        cout << "The Triplet of Numbers are : " <<a[i]<<" "<< a[j] << " and " << a[k];
    else
        cout << "Such triplet does not exist !";
}
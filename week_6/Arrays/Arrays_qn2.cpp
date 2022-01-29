#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int i;
    int n;
    cin>>n;
    int max = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]>max)
        max=a[i];
    }
    int b[max]={0};
    for (i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    for (i = 0; i < max; i++)
    {
        if(b[i]%2!=0)
        break;
    }
    cout<<"Number "<<i<<" occurs odd number of times";
}
    
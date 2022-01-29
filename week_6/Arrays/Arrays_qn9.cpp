#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int pair[100][2];
    int k = 0;
    int i , j;
    int m;
    for(i=1;i<=n;i++)
    {
        a[i-1]=i*i;
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=1;j<i;j++)
        {
            float c = sqrt(a[i] - j*j);
            int d = c;
            
            if(c==d)
            {
                for( m = 0 ; m<k;m++)
                {
                    if(d==pair[m][0])
                    break;
                }
                if(m==k)
                {
                pair[k][0]=j;
                pair[k][1]=d;
                k++;
                }
            }
        }
    }
    if(k==0)
    cout<<"No Pair Exists";
    else
    {
        for(i=0;i<k;i++)
        cout<<pair[i][0]<<" "<<pair[i][1]<<"\n";
    }

}
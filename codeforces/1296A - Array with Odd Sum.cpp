#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, n1=0, n2=0; cin>>n;
        int a[n];
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                n1++;
            }
            else
            {
                n2++;
            }
        }
        if(n1!=0&&n2!=0)
        {
            cout<<"YES\n";
        }
        else if(n2==n&&n%2!=0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    return 0;
}

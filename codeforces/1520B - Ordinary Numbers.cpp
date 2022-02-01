#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, sum=0;
        long long int k=0;
        cin>>n;
        for(int i=0; i<=8;i++)
        {
            k+=pow(10, i);
            for(int j=1;j<=9;j++)
            {
                if(j*k<=n)
                {
                    sum++;
                }
            }
        }
        cout<<sum<<'\n';   
    }
    return 0;
}

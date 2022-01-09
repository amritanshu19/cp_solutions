//https://codeforces.com/problemset/problem/1367/B
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n, en=0, on=0,re=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                en++;
                if(i%2!=0)
                {
                    re++;
                }
            }
            else
            {
                on++;
            }
        }
        if((n%2==0)&&(en==n/2&&on==n/2))
        {
            cout<<re<<endl;
        }
        else if((n%2!=0)&&(en==(n+1)/2&&on==n/2))
        {
            cout<<re<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
    }
    return 0;
}

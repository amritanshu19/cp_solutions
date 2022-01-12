//https://codeforces.com/problemset/problem/469/A
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    int p,q;
    vector<int>a;
    cin>>p;
    for(int i=0; i<p;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    cin>>q;
    for(int i=0; i<q;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    
    if(p+q>=q)
    {
        for(int i=0; i<n;i++)
        {
            if(!(find(a.begin(), a.end(), (i+1)) != a.end()))
            {
                cout<<"Oh, my keyboard!\n";
                return 0;
            }
        }
                cout<<"I become the guy.\n";
 
    }
    else
    {
        cout<<"Oh, my keyboard!\n";
    }
 
    return 0;
}

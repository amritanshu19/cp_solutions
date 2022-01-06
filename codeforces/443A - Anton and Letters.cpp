//https://codeforces.com/problemset/problem/443/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char>A;
    while(1)
    {
        char a;
        cin>>a;
        if(a=='}')
        {
            break;
        }
        
        else if(a=='{'||a ==',')
        {
            continue;
        }
        else 
        {
            A.push_back(a);
        }
    }

    int n =A.size(), res=1;
    if(n==0)
    {
        cout<<0<<endl;
    }
    else
    {
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (A[i] == A[j])
                break;
 
        if (i == j)
            res++;
    }
    cout<<res<<'\n';
    }
    return 0;
}

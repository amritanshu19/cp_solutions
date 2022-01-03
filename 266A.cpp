//Stones on the Table Codeforces 266A
#include<bits/stdc++.h>
using namespace std;


int main()
{ 
    int n, count=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

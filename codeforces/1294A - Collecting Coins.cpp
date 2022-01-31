#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int a, b, c, n, m;
        cin>>a>>b>>c>>n;
        m = n+a+b+c - 3*max(a,max(b,c));
        if(m>=0&&m%3==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";

        }
    }
}

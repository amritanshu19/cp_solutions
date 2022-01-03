//Stable Arrangement of Rooks
//codeforces 1621A
//https://codeforces.com/contest/1621/problem/A
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n, k;
        cin>>n>>k;
        if(n>=2*k-1)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    bool a = j%2==0&&i%2==0;
                    if(a&&i==j)
                    {
                    if(k>0)
                        {
                        cout<<'R';
                        k--;
                        }
                        else{
                        cout<<'.';
                        }
                    }
                    else
                    {
                        cout<<'.';
                    }
                }
                cout<<"\n";
            }
        }
        else
        {
            cout<<-1<<endl;
        }
        t--;
    }

    return 0;
}

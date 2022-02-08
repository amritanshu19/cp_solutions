#include<stdio.h>
int min(int m, int k)
{
    if(m<k)
    {
        return m;
    }
    else
    {
        return k;
    }
}
int main()
{
    int n, m, k;
    scanf(" %d%d%d",&n,&m,&k);
    
    
    if(min(m,k)>=n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

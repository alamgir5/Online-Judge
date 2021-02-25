#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,u,v,ans;
    while(cin>>n)
    {
        if(n==0) break;
        int A[n+5];
        ans=0;
        for(i=1; i<=n; i++)
        {
            cin>>A[i];

        }
        A[0]=A[n];
        A[n+1]=A[1];
        for(i=1; i<=n; i++)
        {
            u=A[i-1];
            v=A[i+1];
            if(u>A[i] && v>A[i])
                ans++;
            else if(u<A[i] && v<A[i])
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


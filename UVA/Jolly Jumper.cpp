#include<bits/stdc++.h>
using  namespace  std;

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'

typedef long long int ll;
typedef unsigned long long int  llu;

int main()
{
    int t,x;
    while(cin>>t)
    {
        int A[t],C[t+2]={0};
        bool ok=false;
        for(int i=0; i<t; i++)
            cin>>A[i];

        for(int i=1; i<t; i++)
        {
            x=abs(A[i]-A[i-1]);
            C[x++];
        }
        for(int i=1; i<t; i++)
        {
            if(C[i]==0)
                ok=true;
        }
        if(ok)
            cout<<"Not jolly"<<nl;
        else cout<<"Jolly"<<nl;
    }
    return 0;
}

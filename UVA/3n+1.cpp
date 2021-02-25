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
    faster
    int a,b;
    while(cin>>a>>b)
    {
        int n,cnt,x,y,mx=0;
        y=max(a,b);
        x=min(a,b);

        for(int i=x; i<=y; i++)
        {
            cnt=1;
            n=i;
            while(n>1)
            {
                if(n%2)
                    n=3*n+1;
                else n/=2;
                cnt++;
            }
            mx=max(mx,cnt);
        }
        cout<<a<<" "<<b<<" "<<mx<<nl;
    }
    return 0;
}


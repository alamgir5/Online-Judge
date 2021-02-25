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
    while(1)
    {
        int n,sum=0;
        cin>>n;
        if(n==0)
            break;
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                sum+=__gcd(i,j);
            }
        }

        cout<<sum<<nl;
    }
    return 0;
}

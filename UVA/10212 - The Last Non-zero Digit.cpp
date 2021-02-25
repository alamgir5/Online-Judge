#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'

#define mod 1000000000
typedef long long int ll;
typedef unsigned long long int  llu;

int main()
{
    ll n,m;

    while(cin>>n>>m)
    {
        ll ans=1;

        if(m==0)
        {
            cout<<1<<nl;
            continue;
        }

        for(ll i=n; i>=n-m+1; i--)
        {
            ans*=i;

            while(ans%10==0)
                ans/=10;

            ans%=mod;
        }

        cout<<ans%10<<nl;
    }
    return 0;
}

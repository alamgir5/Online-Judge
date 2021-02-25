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
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

ll divSum(ll num)
{
    ll result = 0;

    for (ll i=2; i<=sqrt(num); i++)
    {
        if (num%i==0)
        {
            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
        }
    }

    return (result + 1);
}


ll prime(ll x)
{
    if(x < 2)
        return 0;
    if(x == 2)
        return 1;
    if(x%2 == 0)
        return 0;
    ll root = sqrt(x);
    for(ll i=3; i<=root; i+=2)
    {
        if(x%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    ll n;
    cin>>n;
    ll i,ar[n+5];
    char ch;
    cin>>ar[0];
    for(i=1;i<n;i++)
    {
        cin>>ch>>ar[i];
    }

    for(i=0;i<n;i++)
    {
        if(!prime(ar[i]))
        {
            cout<<"No"<<nl;
            continue;
        }
        ll num=pow(2,ar[i]-1);
        num*=(pow(2,ar[i])-1);
        ll ans=divSum(num);
        if(ans==num)cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }
    return 0;
}

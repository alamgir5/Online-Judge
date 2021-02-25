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

map<ll,ll>mp;

void primefact(ll n,ll x)
{
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			ll cnt=0;
			while(n%i == 0)
			{
				cnt++;
				n=n/i;
			}
			mp[i]+=cnt*x;
			//cout<<i<<"^"<<cnt<<",";
		}
	}
	if(n>1)
    {
        mp[n]+=x;
        //cout<<n<<" ^ "<<1<<nl;
    }
	//else cout<<nl;
}
int main()
{
	ll t;
	cin>>t;
	for(ll l=0;l<t;l++)
	{
	    mp.clear();
	    ll n,a,b;
	    cin>>n>>a>>b;
	    ll x,y;
	    if(n==2)
        {
            x=1,y=1;
        }
        else if(n==3)
        {
            x=1,y=2;
        }
        else
        {
            ll o=1,p=1;
            x=1,y=2;
            ll a1,a2;
            for(ll i=4;i<=n;i++)
            {
                a1=x;
                a2=y;
                x+=o;
                y+=p;
                o=a1,p=a2;
            }
        }
       // cout<<x<<" "<<y<<nl;
        primefact(a,x);
        primefact(b,y);
        for(auto it:mp)
        {
            cout<<it.first<<" "<<it.second<<nl;
        }
        cout<<nl;
	}
	return 0;
}

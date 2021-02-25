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

int prime[1000001];
int n=1000001;
vector<int>v;

void sieve()
{
	memset(prime,0,sizeof(prime));
	prime[0]=prime[1]=1;
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=1;
			}
		}
	}
}
//map<ll,ll>mp;
vector<ll>ans;
void solve()
{
    for(ll i=0;i<=n;i++)
    {
        if(!prime[i])
        {
            for(ll j=i*i; j<1000000000001;j*=i) ans.push_back(j);
        }
    }
    sort(ans.begin(),ans.end());
}

int main()
{
    sieve();
    solve();
    //cout<<ans.size()<<nl;
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll i=0;
        ll cnt=0;
        while(ans[i]<l)i++;
        for(;i<ans.size() && ans[i]<=r;i++)
            cnt++;

        cout<<cnt<<nl;
    }
    return 0;
}

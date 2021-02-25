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

vector<ll>v[1000];
map<ll,ll>mp,mp2;

void solve(ll ar[],ll l,ll n,ll sum,ll t)
{
    if(l>n)return;
    if(sum>0&&sum<=t&&mp2[sum]==0)
    {
        //cout<<sum<<" :";
        mp2[sum]=1;
        for(ll i=0;i<l;i++)
        {
            if(mp[i]==1)
            {
                //cout<<ar[i]<<" ";
                v[sum].push_back(ar[i]);
            }
        }
       // cout<<nl;
    }
    mp[l]=1;
    solve(ar,l+1,n,sum+ar[l],t);
    mp[l]=0;
    solve(ar,l+1,n,sum,t);
    //mp[l]=1;
}

int main()
{
    ll sum,n;
    while(cin>>sum)
    {
        cin>>n;
        ll ar[n+3];
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        bool ok=false;
        solve(ar,0,n,0,sum);
        for(ll i=sum;i>0;i--)
        {
            if(v[i].size()!=0)
            {
                for(ll j=0;j<v[i].size();j++)cout<<v[i][j]<<" ";
                cout<<"sum:"<<i<<nl;
                ok=true;
                break;
            }
        }
        for(ll i=0;i<=sum;i++)v[i].clear();
        mp.clear();
        mp2.clear();
        }
    return 0;
}

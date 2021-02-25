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

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,char> >v;
        ll i;
        char ch='a';
        for(i=0;i<=25;i++)
        {
            ll x=pow(2,i);
            v.push_back({x,ch});
            ch++;
        }
        ll ans=0;
        string s="";
        while(k)
        {
            if(k==n)
            {
                for(i=0;i<n;i++)
                {
                    s+='a';
                }
                n=0;
                k=0;
                break;
            }
            ll a=0,val;
            char y;
            for(i=0;i<=25;i++)
            {
                if(k-v[i].first>=n-1)
                {
                    a=1;
                    val=v[i].first;
                    y=v[i].second;
                }
                else break;
            }
           if(a==0)
           {
               ans=1;
               break;
           }
           k=k-val;
           n--;
           s+=y;
           if(n==0)break;

        }
        if(ans==1||n!=0||k!=0)cout<<-1<<nl;
        else cout<<s<<nl;
    }
    return 0;

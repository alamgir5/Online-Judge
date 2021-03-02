#include<bits/stdc++.h>
using  namespace  std;

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'

typedef long long int ll;
typedef unsigned long long int  llu;

ll fact(ll n)
{
    if(n==1)
        return 1;
    else return n*fact(n-1);
}

int main()
{
    ll n,ca=1;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        map<char,int>mp;

        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }

        int x=s.size();
        ll ans=fact(x);
        for(auto it:mp)
        {
            ll y=it.second;
            y=fact(y);
            ans/=y;
        }
        cout<<"Data set "<<ca<<": ";
        cout<<ans<<nl;
        ca++;
    }
    return 0;
}


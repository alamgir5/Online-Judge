#include <bits/stdc++.h>
using namespace std;

#define faster      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi          acos(-1.0)
#define nl          '\n'

///Library
#define mem(a,b)    memset(a,b,sizeof(a))
#define all(a)      a.begin(),a.end()
#define Sort(x)     sort(x.begin(),x.end())
#define Reverse(x)  reverse(x.begin(),x.end())
#define SortA(ar,s) sort(ar,ar+s)
#define SortD(ar,s) sort(ar,ar+s,greater<ll>())
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)    (a*(b/gcd(a,b)))
#define sq(x)       (x)*(x)

#define min3(a,b,c)        min(a,min(b,c))
#define min4(a,b,c,d)      min(a,min(b,min(c,d)))
#define max3(a,b,c)        max(a,max(b,c))
#define max4(a,b,c,d)      max(a,max(b,max(c,d)))
#define ABS(x)             ((x)<0?-(x):(x))
#define pb                 push_back
#define mod                1000000007

///data type
typedef long long int ll;
typedef unsigned long long int llu;

ll power(ll a,ll n,ll p)
{
    ll ans=1;
    while(n)
    {
        if(n%2)
        {
            ans*=a;
            ans%=p;
            n--;
        }
        else
        {
            a*=a;
            a%=p;
            n/=2;
        }
    }
    return ans;
}

int main()
{
    ll a,n,p;
    while(cin>>a>>n>>p)
    {
        cout<<power(a,n,p)<<nl;
    }
    return 0;
}


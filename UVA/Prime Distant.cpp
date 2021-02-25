#include <bits/stdc++.h>
using namespace std;

#define faster      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi          acos(-1.0)
#define nl          '\n'


/**-------Library-------*/
#define mem(a,b)       memset(a,b,sizeof(a))
#define all(a)         a.begin(),a.end()
#define Sort(x)        sort(x.begin(),x.end())
#define Reverse(x)     reverse(x.begin(),x.end())
#define SortA(ar,s)    sort(ar,ar+s)
#define SortD(ar,s)    sort(ar,ar+s,greater<int>())
#define maxa(A,n)        *max_element(A,A+n)
#define minall(A,n)      *min_element(A,A+n)
#define gcd(a,b)       __gcd(a,b)
#define lcm(a,b)       (a*(b/gcd(a,b)))
#define sq(x)          (x)*(x)

#define fr0(i, n)      for(int i=0; i<n; i++)
#define fr1(i, n)      for(int i=1; i<=n; i++

#define min3(a,b,c)       min(a,min(b,c))
#define min4(a,b,c,d)     min(a,min(b,min(c,d)))
#define max3(a,b,c)       max(a,max(b,c))
#define max4(a,b,c,d)     max(a,max(b,max(c,d)))
#define ABS(x)            ((x)<0?-(x):(x))
#define pb(x)             push_back(x)
#define mod               1000000007
#define precision(x)      cout<<fixed<<setprecision(x)

/**----------Graph Moves----------*/
const int fx[] = {+1,-1,+0,+0};                         // 4 X directions
const int fy[] = {+0,+0,+1,-1};                         // 4 Y directions
const int fx8[] = {+0,+0,+1,-1,-1,+1,-1,+1};            // King X Moves
const int fy8[] = {-1,+1,+0,+0,+1,+1,-1,-1};            // King Y Moves
const int kx[] = {-2, -2, -1, -1,  1,  1,  2,  2};      // Knight X Moves
const int ky[] = {-1,  1, -2,  2, -2,  2, -1,  1};      // Knight Y Moves

/**------- Char Chk----------*/
bool isLow(char ch)
{
    if(ch>='a' && ch<='z') return true;
    return false;
}
bool isUpp(char ch)
{
    if(ch>='A' && ch<='Z') return true;
    return false;
}
bool isDig(char ch)
{
    if(ch>='0' && ch<='9') return true;
    return false;
}

/**----data type----*/
typedef long long int ll;
typedef unsigned long long int  llu;

vector<ll>v,v1;
void sieve(ll n)
{
    ll prime[100001];
    memset(prime,0,sizeof(prime));
    for(ll i=2; i*i<=n; i++)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i; j<=n; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(ll i=2; i<=n; i++)
    {
        if(prime[i]==0)v.push_back(i);
    }
}
void init(ll l,ll r)
{
    if(l==1)l++;
    ll mx=r-l+1;
    ll ar[mx+1];
    for(ll i=0; i<=mx; i++)ar[i]=0;
    for(ll p:v)
    {
        if(p*p<=r)
        {
            ll i=(l/p)*p;
            if(i<l)i+=p;
            for(; i<=r; i+=p)
            {
                if(i!=p)
                {
                    ar[i-l]=1;
                }
            }
        }
    }
    for(ll i=0; i<mx; i++)
    {
        if(ar[i]==0)
        {
            //cout<<l+i<<nl;
            v1.push_back(l+i);
        }
    }
}

int main()
{
    sieve(100000);
    ll t,L,R;
    while(cin>>L>>R)
    {
        v1.clear();
        init(L,R);

        if(v1.size()<2)
            cout<<"There are no adjacent primes."<<nl;
        else
        {
            ll mx=0,ans1,ans2,ans3,ans4;
            int mn=INT_MAX;
            for(ll i=1; i<v1.size(); i++)
            {
                ll x=v1[i]-v1[i-1];

                if(mn>x)
                {
                    mn=x;
                    ans1=v1[i-1];
                    ans2=v1[i];
                }

                if(mx<x)
                {
                    mx=x;
                    ans3=v1[i-1];
                    ans4=v1[i];
                }
            }
            cout<<ans1<<","<<ans2<<" are closest, "<<ans3<<","<<ans4<<" are most distant."<<nl;
        }
    }
    return 0;
}

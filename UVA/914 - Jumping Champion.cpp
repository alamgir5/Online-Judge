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
#define end               cout<<nl
#define yes               cout<<"YES"<<nl
#define no                cout<<"NO"<<nl

/**----------Graph Moves----------*/
const int fx[] = {+1,-1,+0,+0};                         // 4 X directions
const int fy[] = {+0,+0,+1,-1};                         // 4 Y directions
const int fx8[] = {+0,+0,+1,-1,-1,+1,-1,+1};            // King X Moves
const int fy8[] = {-1,+1,+0,+0,+1,+1,-1,-1};            // King Y Moves
const int kx[] = {-2, -2, -1, -1,  1,  1,  2,  2};      // Knight X Moves
const int ky[] = {-1,  1, -2,  2, -2,  2, -1,  1};      // Knight Y Moves

/**------- Char Chk----------*/
bool isLow(char ch){if(ch>='a' && ch<='z') return true;return false;}
bool isUpp(char ch){if(ch>='A' && ch<='Z') return true;return false;}
bool isDig(char ch){if(ch>='0' && ch<='9') return true;return false;}

/**----data type----*/
typedef long long int ll;
typedef unsigned long long int  llu;

int prime[90000001];
int n=90000000;
vector<int>v;
void sieve()
{
    //int n=100000;
    //vector<int>v;
    memset(prime,0,sizeof(prime));
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==0)v.push_back(i);
    }
}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        map<int,int>mp;
        vector<int>v3;
        int mx=0;
        int i=0;
        while(i<v.size())
        {
            // cout<<l<<" "<<v[i]<<nl;
            if(l<=v[i])break;
            i++;
        }
        i++;
        // cout<<i<<" "<<v[i]<<nl;
        while(v[i]<=r)
        {
            mp[v[i]-v[i-1]]++;
            mx=max(mx,mp[v[i]-v[i-1]]);
            i++;
        }
        for(auto it:mp)
        {
            if(it.second==mx)v3.push_back(it.first);
        }
        if(v3.size()==1)cout<<"The jumping champion is "<<v3[0]<<nl;
        else cout<<"No jumping champion"<<nl;
    }
    return 0;
}

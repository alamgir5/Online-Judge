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
#define SortD(ar,s) sort(ar,ar+s,greater<int>())
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
#define end                printf("\n")
#define yes                printf("YES\n")
#define no                 printf("NO\n")

///data type
typedef long long int ll;
typedef unsigned long long int  llu;

ll palindrome(ll n)
{
    ll temp,rev=0;
    bool ok=false;
    temp=n;
    while(n)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(temp==rev)
        ok=true;
    return ok;
}

int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,temp,rev;
        cin>>n;
        while(1)
        {
            rev=0;
            temp=n;
            while(n)
            {
                rev=(rev*10)+(n%10);
                n=n/10;
            }
            rev+=temp;
            cnt++;
            if(palindrome(rev))
                break;
            else n=rev;
        }
        cout<<cnt<<" "<<rev<<nl;
    }
    return 0;
}

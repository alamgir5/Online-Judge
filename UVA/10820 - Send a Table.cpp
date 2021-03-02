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

int phi(int n)
{
    int res=n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            res/=i;
            res*=(i-1);
            while(n%i==0)
            {
                n/=i;
            }
        }

    }
    if(n>1)
    {
        res/=n;
        res*=(n-1);
    }
    return res;
}

int A[1000000];

void solve()
{
    ll sum=0;
    for(int i=1; i<=50005; i++)
    {
        sum+=phi(i);
        A[i]=sum;
    }

}

int main()
{
    ll n;

    solve();

    while(cin>>n && n!=0)
    {
        cout<<2*A[n]-1<<nl;
    }

    return 0;
}

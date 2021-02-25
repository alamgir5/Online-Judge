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
int prime[90000001];
int n=90000000;
vector<int>v;
vector<pair<int,int> >p;

void sieve()
{
	memset(prime,0,sizeof(prime));
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
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)v.push_back(i);
	}
}

int main()
{
	sieve();
	int n;
	while(cin>>n)
	{
	    if(n==0)break;
	   int i=0,j=1;
	   int sum=v[0];
	   int ans=0;
	   while(i<j)
       {
           if(sum==n)
           {
               ans++;
               sum+=v[j];
               sum-=v[i];
               j++;
               i++;
           }
           else if(sum<n)
           {
               sum+=v[j];
               j++;
           }
           else{
            sum-=v[i];
            i++;
           }
       }
       cout<<ans<<nl;
	}
    return 0;
}

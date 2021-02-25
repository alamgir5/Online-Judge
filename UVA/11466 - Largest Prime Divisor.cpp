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

vector<ll>v;

void primefact(ll n)
{
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i == 0)
			{
				n=n/i;
			}
			v.push_back(i);
		}
	}

	if(n>1)
        v.push_back(n);
}

int main()
{
	ll n;
	while(cin>>n)
	{

        if(n==0)
            break;

        n=abs(n);

		primefact(n);

//		for(int i=0; i<v.size(); i++)
//            cout<<v[i]<<nl;

		if(v.size()==1 || n==1)
            cout<<-1<<nl;
        else cout<<v[v.size()-1]<<nl;

        v.clear();
	}
	return 0;
}

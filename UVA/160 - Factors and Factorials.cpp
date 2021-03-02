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

map<int,int>mp;

void primefact(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			int cnt=0;
			while(n%i == 0)
			{
				cnt++;
				n=n/i;
				//cout<<"kd"<<nl;
			}
			//cout<<i<<"^"<<cnt<<",";
			mp[i]+=cnt;
		}
	}
	if(n>1) mp[n]+=1;
        //cout<<n<<"^"<<1<<nl;
	//else cout<<nl;
}
int main()
{
    faster
	int n;
	while(cin>>n && n!=0)
    {
        for(int i=1; i<=n; i++)
        {
            primefact(i);
        }

        cout<<setw(3)<<n<<"! =";
        int i=0;
        for(auto it:mp)
        {
            i++;
           if(i>15)
           {
               i-=15;
                cout<<"\n      ";
           }
          cout<<setw(3)<<it.second;
        }
        cout<<nl;
        mp.clear();
    }
    return 0;
}

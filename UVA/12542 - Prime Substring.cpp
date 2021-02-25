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

bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0")break;
        int mx=0;
        for(int i=0;i<s.size();i++)
        {
            int x=0;
            for(int j=i;j<s.size();j++)
            {
                x=(x*10)+(s[j]-'0');
                if(x>100000)
                    break;

                if(prime(x))
                {
                    mx=max(mx,x);
                }

            }
        }
        cout<<mx<<nl;
    }
}

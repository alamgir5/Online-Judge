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

int main()
{
    map<string,string>mp;
    string a,x,b;
    getline(cin,a);
    while(a!="")
    {
        stringstream ss(a);
        ss >> a >> b;
        mp[b]=a;
        getline(cin,a);
    }
    while(cin>>x)
    {
        //cout<<"dhuklam"<<nl;
        if(mp.find(x)==mp.end())cout<<"eh"<<nl;
        else cout<<mp[x]<<nl;
    }
    return 0;
}

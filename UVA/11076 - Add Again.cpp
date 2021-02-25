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

ll display(int a[], int n)
{
    ll ans=0;
	for (int i = 0; i < n; i++) {
		//cout << a[i] << " ";
		ans=ans*10+a[i];
	}
	//cout<<nl;
	return ans;
}

ll findPermutations(int a[], int n)
{
    ll sum=0;
	sort(a, a + n);
	do {
		sum+=display(a, n);
	} while (next_permutation(a, a + n));
	return sum;
}

int main()
{
	int n;
	while(cin>>n)
    {
        if(n==0)
            break;

        int ar[n+3];
        for(int i=0;i<n;i++)
            cin>>ar[i];

        cout<<findPermutations(ar,n)<<"\n";
    }
	return 0;
}

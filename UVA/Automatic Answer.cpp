#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,d;
    long long int ans;
    cin>>t;
    while(t--)
    {
      cin>>n;
      ans=abs((((n * 63 + 7492) * 5 - 498)/10)%10);
      cout<<ans<<endl;
    }
    return 0;
}

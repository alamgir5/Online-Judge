#include<bits/stdc++.h>
using  namespace  std;

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'

typedef long long int ll;
typedef unsigned long long int  llu;

ll fact(ll n)
{
    if(n==1)
        return 1;
    else return n*fact(n-1);
}

int main()
{
    ll n;
    while(cin>>n)
    {
        if(n>13 || (n<0 && abs(n)%2==1))
            cout<<"Overflow!"<<nl;
        else if(n<8 || (n<0 && abs(n)%2==0))
            cout<<"Underflow!"<<nl;
        else cout<<fact(n)<<nl;
    }
    return 0;
}


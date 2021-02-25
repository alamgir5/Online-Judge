#include<bits/stdc++.h>
using  namespace  std;

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'

typedef long long int ll;
typedef unsigned long long int  llu;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int k=0,mx=0,A[10000],x;
        string s;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>A[k++])

           for(int i=0; i<k; i++)
        {
            for(int j=i+1; j<k; j++)
            {
                x=__gcd(A[i],A[j]);
                if(x>mx)
                    mx=x;
            }
        }
        cout<<mx<<nl;

    }
    return 0;
}

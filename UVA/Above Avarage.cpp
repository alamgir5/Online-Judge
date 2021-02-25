#include <bits/stdc++.h>
using namespace std;

#define faster      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi          acos(-1.0)
#define nl          '\n'

///Library
#define mem(a,b)    memset(a,b,sizeof(a))
#define all(a)      a.begin(),a.end()
#define Sort(x)     sort(x.begin(),x.end())
#define Reverse(x)  reverse(x.begin(),x.end())
#define SortA(ar,s) sort(ar,ar+s)
#define SortD(ar,s) sort(ar,ar+s,greater<int>())
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)    (a*(b/gcd(a,b)))
#define sq(x)       (x)*(x)

#define min3(a,b,c)        min(a,min(b,c))
#define min4(a,b,c,d)      min(a,min(b,min(c,d)))
#define max3(a,b,c)        max(a,max(b,c))
#define max4(a,b,c,d)      max(a,max(b,max(c,d)))
#define ABS(x)             ((x)<0?-(x):(x))
#define pb                 push_back
#define mod                1000000007
#define end                printf("\n")
#define yes                printf("YES\n")
#define no                 printf("NO\n")

///data type
typedef long long int ll;
typedef unsigned long long int  llu;

int main()
{
    int t;
    while(cin>>t)
    {
        while(t--)
        {
            double x,avg,sum=0,A[1005],cnt;
            int n;
            cin>>n;
            for(int i=0; i<n; i++)
            {
                cin>>A[i];
                sum+=A[i];
            }
            avg=(double)(sum/n);
            cnt=0;
            for(int i=0; i<n; i++)
            {
                if(A[i]>avg)
                    cnt++;
            }
            x=(double)(100*cnt/n);
            cout<<fixed<<setprecision(3)<<x<<"%"<<nl;
        }
    }
    return 0;
}

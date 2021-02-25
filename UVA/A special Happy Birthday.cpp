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
    string song[] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int n,turn=0;
    cin>>n;
    string s[105];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    if(n<=16)
        turn=1;
    else if(n<=32)
        turn=2;
    else if(n<=48)
        turn=3;
    else if(n<=64)
        turn=4;
    else if(n<=80)
        turn=5;
    else if(n<=96)
        turn=6;
    else
        turn=7;

    for(int i=0,j=0,k=0; i<16*turn; i++)
    {
        cout<<s[j++]<<": "<<song[k++]<<nl;
        if(j==n)
            j=0;
        if(k==16)
            k=0;
    }
    return 0;
}

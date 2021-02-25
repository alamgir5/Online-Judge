#include <bits/stdc++.h>
using namespace std;

#define faster      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi          acos(-1.0)
#define nl          '\n'

/**-------Library-------*/
#define mem(a,b)       memset(a,b,sizeof(a))
#define all(a)         a.begin(),a.end()
#define Sort(x)        sort(x.begin(),x.end())
#define Reverse(x)     reverse(x.begin(),x.end())
#define SortA(ar,s)    sort(ar,ar+s)
#define SortD(ar,s)    sort(ar,ar+s,greater<int>())
#define maxa(A,n)        *max_element(A,A+n)
#define minall(A,n)      *min_element(A,A+n)
#define gcd(a,b)       __gcd(a,b)
#define lcm(a,b)       (a*(b/gcd(a,b)))
#define sq(x)          (x)*(x)

#define fr0(i, n)      for(int i=0; i<n; i++)
#define fr1(i, n)      for(int i=1; i<=n; i++

#define min3(a,b,c)       min(a,min(b,c))
#define min4(a,b,c,d)     min(a,min(b,min(c,d)))
#define max3(a,b,c)       max(a,max(b,c))
#define max4(a,b,c,d)     max(a,max(b,max(c,d)))
#define ABS(x)            ((x)<0?-(x):(x))
#define pb(x)             push_back(x)
#define mod               1000000007
#define precision(x)      cout<<fixed<<setprecision(x)
#define end               cout<<nl
#define yes               cout<<"YES"<<nl
#define no                cout<<"NO"<<nl

/**----------Graph Moves----------*/
const int fx[] = {+1,-1,+0,+0};                         // 4 X directions
const int fy[] = {+0,+0,+1,-1};                         // 4 Y directions
const int fx8[] = {+0,+0,+1,-1,-1,+1,-1,+1};            // King X Moves
const int fy8[] = {-1,+1,+0,+0,+1,+1,-1,-1};            // King Y Moves
const int kx[] = {-2, -2, -1, -1,  1,  1,  2,  2};      // Knight X Moves
const int ky[] = {-1,  1, -2,  2, -2,  2, -1,  1};      // Knight Y Moves

/**------- Char Chk----------*/
bool isLow(char ch){if(ch>='a' && ch<='z') return true;return false;}
bool isUpp(char ch){if(ch>='A' && ch<='Z') return true;return false;}
bool isDig(char ch){if(ch>='0' && ch<='9') return true;return false;}

/**----data type----*/
typedef long long int ll;
typedef unsigned long long int  llu;

bool two(string s)
{
    int x=s[s.size()-1]-'0';

    if(x&1)
        return false;
    else return true;
}

bool three(string s)
{
    ll sum=0;
    for(int i=0; i<s.size(); i++)
    {
        int x=s[i]-'0';
        sum+=x;
    }

    if(sum%3!=0)
        return false;
    else return true;
}

bool four(string s)
{
    int sz=s.size();
    if(sz==1)
    {
        int x=s[0]-'0';
        if(x%4==0)
            return true;
        else return false;
    }

    else
    {
        ll ans=s[sz-1]+s[sz-2]*10;

        if(ans%4==0)
            return true;
        else return false;
    }
}


bool five(string s)
{
    if(s[s.size()-1]=='0' || s[s.size()-1]=='5')
        return true;
    else return false;
}


bool six(string s)
{
    if(two(s) && three(s))
        return true;
    else return false;
}

bool seven(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum=sum*10 + s[i]-'0';
        sum%=7;
    }
    if(sum==0)return true;
    return false;
}

bool eight(string s)
{
    int sz=s.size();
    if(sz==1)
    {
        int x=s[0]-'0';
        if(x%8==0)
            return true;
        else return false;
    }

    else if(sz==2)
    {
        ll ans=s[sz-1]+s[sz-2]*10;

        if(ans%8==0)
            return true;
        else return false;
    }

    else
    {
        ll ans=s[sz-1]+s[sz-2]*10+s[sz-3]*100;

        if(ans%8==0)
            return true;
        else return false;
    }
}


bool nine(string s)
{
    ll sum=0;
    for(int i=0; i<s.size(); i++)
    {
        int x=s[i]-'0';
        sum+=x;
    }

    if(sum%9!=0)
        return false;
    else return true;
}


bool ten(string s)
{
    int sz=s.size();
    if(s[sz-1]=='0')
        return true;
    else return false;
}

bool eleven(string s)
{
    ll sum=0;
    for(int i=0; i<s.size(); i++)
    {
        int x=s[i]-'0';
        if(i&1)
            sum-=x;
        else sum+=x;
    }

    sum=abs(sum);

    if(sum==0  || sum%11==0)
        return true;
    else return false;
}

bool twelve(string s)
{
    if(three(s) && four(s))
        return true;
    else return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int m,A[15];
        cin>>m;
        for(int i=0; i<m; i++)
            cin>>A[i];

        bool ok=true;
        for(int i=0; i<m; i++)
        {
            if(A[i]==2)
            {
                if(two(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==3)
            {
                if(three(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==4)
            {
                if(four(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==5)
            {
                if(five(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==6)
            {
                if(six(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==7)
            {
                if(seven(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==8)
            {
                if(eight(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==9)
            {
                if(nine(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==10)
            {
                if(ten(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==11)
            {
                if(eleven(s)==false)
                {
                    ok=false;
                    break;
                }
            }

            else if(A[i]==12)
            {
                if(twelve(s)==false)
                {
                    ok=false;
                    break;
                }
            }
        }

        if(s=="0")
            cout<<s<<" - Wonderful."<<nl;
        else if(ok)
            cout<<s<<" - Wonderful."<<nl;
        else cout<<s<<" - Simple."<<nl;
    }
    return 0;
}

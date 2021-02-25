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
    string s;
    set<string>se;
    set<string>::iterator it;
    while(cin>>s)
    {
        if(s=="0")
            break;

        string c="";
        for(int i=0; i<s.size(); i++)
        {
            char x=tolower(s[i]);
            if(x>=97 && x<=122)
                c+=x;
            else if(c!="")

            {
                se.insert(c);
                c="";
            }
        }

        if(c!="")
            se.insert(c);
    }
    for(it=se.begin(); it!=se.end(); it++)
        cout<<*it<<nl;
    return 0;
}


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
    while(t--)
    {
        int k,v,m;
        char ch;
        string str;
        double sum=0.00;

        cin>>k;
        map<char,int>mp;
        map<char,int>::iterator it;
        while(k--)
        {
            cin>>ch>>v;
            mp[ch]=v;
        }
        cin>>m;
        cin.ignore();
        while(m--)
        {
            getline(cin,str);
            for(int i=0; i<str.size(); i++)
            {
                it=mp.find(str[i]);
                if(it!=mp.end())
                    sum+=it->second;

            }
        }
        sum/=100.00;
        printf("%0.2lf$\n",sum);
    }
    return 0;
}

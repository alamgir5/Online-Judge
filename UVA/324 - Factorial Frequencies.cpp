#include<bits/stdc++.h>
using  namespace  std;

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'

typedef long long int ll;
typedef unsigned long long int  llu;

void BigFactorial(int n)
{
    int a[1500];
    int i,j,temp,m,x;
    a[0]=1;
    m=1;
    temp = 0;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<m; j++)
        {
            x = a[j]*i+temp;
            a[j]=x%10;
            temp = x/10;
        }
        while(temp>0)
        {
            a[m]=temp%10;
            temp = temp/10;
            m++;
        }
    }


    map<int,int>mp;
    for(i=m-1; i>=0; i--)
        mp[a[i]]++;

    int ii=0;
    cout<<n<<"! --"<<nl;
    for(int i=0; i<10; i++)
    {
        if(ii==5)
            cout<<nl;
        cout<<"("<<i<<")  "<<mp[i]<<"  ";
        ii++;
    }
    cout<<nl;
}

int main()
{

    int n;
    while(cin>>n && n!=0)
    {
        BigFactorial(n);
    }
    return 0;
}


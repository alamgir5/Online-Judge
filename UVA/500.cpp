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
    int a[1500];
    int n,i,j,temp,m,x;
    while(cin>>n)
    {
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
        cout<<n<<'!'<<endl;
        for(i=m-1; i>=0; i--)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,A[4];
    cin>>t;
    int i=1;
    while(t--)
    {
      cin>>a>>b>>c;
      cout<<"Case "<<i<<": ";
      A[0]=a,A[1]=b,A[2]=c;
      sort(A,A+3);
      cout<<A[1]<<endl;
      i++;
    }
    return 0;
}

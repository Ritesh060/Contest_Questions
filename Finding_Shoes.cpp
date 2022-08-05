#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,left,y,r;
        cin>>n>>m;
        y=n;
        n=n*2;
        int x=(n/2);
  if(m>=n/2)
  {
      r=0;
  }
  else
  {
      r=abs(m-y);
  }
        cout<<x+r<<"\n";
    }
}
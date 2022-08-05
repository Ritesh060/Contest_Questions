#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int func()
{

    ll n;       
    cin>>n;
    ll a[n], b[n];
        
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        ll x = a[i], y = b[i];
        for (int j = i+1; j < n; j++)
        {
            if (x == b[j] && y == a[j])
            {
                c++;
            }
                
        }
            
    }
    cout<<c<<endl;
    return 0;   
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        func();
    }
    return 0;
    
}
      
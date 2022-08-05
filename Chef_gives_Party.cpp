#include<bits/stdc++.h>
using namespace std;

void party(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n, x, k;
        cin>>n>>x>>k;
        int y = n * x;
        if (y <= k)
        {
            cout<<"YES"<<endl;
        }
        
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    party(t);
    return 0;
}
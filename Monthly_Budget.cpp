#include<bits/stdc++.h>
using namespace std;

void monthly_budget(int t)
{
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin>>x>>y;
        int r = y * 30;
        if (x >= r)
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
    monthly_budget(t);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void remote(int t)
{
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin>>x>>y;
        if(x > y)
        {
            cout<<x-y<<endl;
        }
        else
        {
            cout<<y-x<<endl;
        }
    }
    
}

int main()
{
    int t;
    cin>>t;
    remote(t);
}
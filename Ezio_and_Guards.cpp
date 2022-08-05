#include<bits/stdc++.h>
using namespace std;

void ezio(int t)
{
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin>>x>>y;
        if (x >= y)
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
    ezio(t);
    return 0;
}
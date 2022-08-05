#include<bits/stdc++.h>
using namespace std;

void cooler1(int t)
{
    for (int i = 0; i < t; i++)
    {
        int x , y , m;
        cin>>x>>y>>m;

        if ((x * m) < y)
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
    cooler1(t);
    return 0;
}
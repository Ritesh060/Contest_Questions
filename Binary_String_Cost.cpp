#include<bits/stdc++.h>
using namespace std;

void binary(int t)
{
    for (int  i = 0; i < t; i++)
    {
        int n, y, u;
        cin>>n>>y>>u;
        string h;
        cin>>h;
        string r(n, '0');
        
        if (r == h)
        {
            cout<<"0";
        }
        else
        {
            if(y>u)
                {
                    cout<<u<<endl;
                }
            else
                {
                    cout<<y<<endl;
                }  
        }
        
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    binary(t);
}
#include<bits/stdc++.h>
using namespace std;

void cab(int t)
{
    for (int i = 0; i < t; i++)
    {
        int x,y;
        cin>>x>>y;
        if (x > y)
        {
            cout<<"SECOND"<<endl; 
        }
        else if (x == y)
        {
            cout<<"ANY"<<endl;
        }
        else
        {
            cout<<"FIRST"<<endl;
        }
        
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    cab(t);
    
}
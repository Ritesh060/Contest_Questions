#include<bits/stdc++.h>
using namespace std;

void subs(int t)
{

    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        
        if (x<=30)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    
}

int main()
{
    int t;
    cin>>t;
    subs(t);
    return 0;
}
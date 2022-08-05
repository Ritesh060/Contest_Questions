#include<bits/stdc++.h>
using namespace std;

void army(int t)
{
    for (int i = 0; i < t; i++)
    {
        int a, b ,c;
        cin>>a>>b>>c;

        if (a > (b + c))
        {
            cout<<"YES"<<endl;
        }
        else if (b > (a+c))
        {
            cout<<"YES"<<endl;
        }

        else if (c> (a + b))
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
    army(t);
    return 0;
}
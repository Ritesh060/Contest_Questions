#include<bits/stdc++.h>
using namespace std;

void multiple(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n, h, f;
        h = 0;
        f = 0;
        string s;
        cin>>n;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' || s[i] == '5')
            {
                h+= 1;
            }
            
        }
        if (h == 0)
        {
            cout<<"No"<<endl;
        }
        
        else
        {
            cout<<"Yes"<<endl;
        }
        
        
        
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    multiple(t);
}
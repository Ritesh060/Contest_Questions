#include<bits/stdc++.h>
using namespace std;

void track(int t)
{
    for (int i = 0; i < t; i++)
    {
        int a, b ,m;
        cin>>a>>b>>m;
        
        int max, min;

        if (a > b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }

        int r = min + (m - max);
        
        if (r < (max - min))
        {
            cout<<r<<endl;
        }
        else
        {
            cout<<(max - min)<<endl;
        }
        
        
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    track(t);
    return 0;
}
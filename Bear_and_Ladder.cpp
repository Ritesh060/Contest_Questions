#include<bits/stdc++.h>
using namespace std;

void hug(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n, m;
        int min, max;
        min = 0;
        max = 0;
        cin>>n>>m;
        if(n>m)
        {
            max = n;
            min = m;
        }
        else
        {
            min = n;
            max = m;
        }

        if(min % 2 != 0 && min + 1 == max)
        {
            cout<<"YES"<<endl;
        }
        else if(min + 2 == max)
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
    hug(t);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void cooler2(int t)
{
    for (int i = 0; i < t; i++)
    {
        int x,y;
        scanf("%d %d", &x , &y);
        if (y%x != 0)
        {
            cout<<y/x<<endl;
        }
        else
        {
            cout<<y/x - 1<<endl;
        }
        
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    cooler2(t);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void min_cars(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int y = n/4;
        int r = n%4;

        if (r != 0)
        {
            cout<<y+1<<endl;
        }
        else
        {
            cout<<y<<endl;
        }
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    min_cars(t);
}
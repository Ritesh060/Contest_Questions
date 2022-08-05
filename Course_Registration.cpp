#include<bits/stdc++.h>
using namespace std;

void course(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n, m , k;
        cin>>n>>m>>k;

        if((m - k)>= n)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

int main()
{
    int t;
    cin>>t;

    course(t);

    return 0;
}
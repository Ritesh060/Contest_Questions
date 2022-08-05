#include<bits/stdc++.h>
using namespace std;

void jenga(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin>>n>>x;
        
        if (n <= x)
        {
            int y = 0;
            while (n <= x)
            {
                x = x - n;
                if (x == 0)
                {
                    y = 1;
                }

                else if (n <= x)
                {
                    y = 1;
                }  
            }
            if (y == 1)
            {
                cout<<"YES"<<endl;
            }
            
            

            
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
    jenga(t);
    return 0;
}
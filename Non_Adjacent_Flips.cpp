#include<bits/stdc++.h>

using namespace std;

void flips(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        vector <int> y;
        vector <int> z;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                if (std::find(y.begin(), y.end(), i-1) != y.end())
                {
                    z.push_back(i);
                }
                else
                {
                    y.push_back(i);
                }
                
                
            }
        }
        int u = 0;
        if (z.size() == 0 && y.size() == 0)
        {
            u = 0;
        }
        else if (y.size() > 0 && z.size() == 0)
        {
            u = 1;
        }
        else
        {
            u = 2;
        }
        
        
            

        cout<<u<<endl;
        

        
    }
    
}

int main()
{
    int t;
    cin>>t;
    flips(t);
    return 0;
}
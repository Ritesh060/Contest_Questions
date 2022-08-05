#include<bits/stdc++.h>
using namespace std;

int digit(string n)
{
        string g = " ";
        int u = 0;
        vector <int> arr;
        for (int i = 0; i < n.size(); i++)
        {
            g = n[i];
            stringstream geek(g);
            
            int x = 0;
            geek>>x;
            u += x;
            arr.push_back(x);
            
        }
        return u;
    
}

int check()
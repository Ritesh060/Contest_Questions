#include<bits/stdc++.h>
using namespace std;

void equal(int t)
{
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin>>y;
            arr.push_back(y);
        }

        vector <int> odd;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 != 0)
            {
                odd.push_back(i);
            }
            
        }

        int g = 0;

        if (odd.size() == 2)
        {
            g = 1;
        }
        else if (odd.size() % 2 == 0)
        {
            g = odd.size()/2;
        }
        else if (odd.size() == arr.size())
        {
            g = 0;
        }
        
        else if(odd.size() % 2 != 0 && odd.size() != 1)
        {
            cout<<"yo";
            g = (odd.size()/2);
        }
        else if (arr.size() == odd.size())
        {
            g = 0;
        }
        else if (odd.size() == 1)
        {
            g = arr.size() - 1;
        }
        
        
            
            
        cout<<g<<endl;
        
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    equal(t);
    return 0;
}
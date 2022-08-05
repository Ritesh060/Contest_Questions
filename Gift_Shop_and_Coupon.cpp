#include<bits/stdc++.h>
using namespace std;

void q5(int t)
{
    int n, k;
    cin>>n;

    int arr[n];
    int s = 0, y = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        s += arr[i];
    }

    sort(arr, arr + n);

    if (s <= k)
    {
        cout<<n;
    }
    else if (s >= k)
    {
        for (int i = 0; i < n; i++)
        {
            if (k >= arr[i])
            {
                y += 1;
                k -= arr[i];    
            }
            else
            {
                /* code */
            }
            
            
        }
        
    }
    
    
    
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t, a, b, n, x, y, flag = 0;
    cin>>t;
    
    for(int i = 0; i < t; i++)
    {
        x = 0;
        y = 0;
        cin>>a>>b>>n;
        for(int j = n; j >= x + y; j--, (flag == 0)?x++:y++)
        {
            //cout<<a<<b;
            if(a * (x + 1) < b * (y + 1))
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
        }
        if(flag)
        {
            cout<<b * (y + 1);
        }
        else
        {
            cout<<a * (x + 1);
        }
    }
    
    return 0;
}
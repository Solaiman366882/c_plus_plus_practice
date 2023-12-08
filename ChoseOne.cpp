#include <bits/stdc++.h>

using namespace std;



int main()
{
    int test;
    cin >> test;
    for(int t=0; t < test; t++)
    {
        int n,sum,flag=0;
        cin >> n >> sum;
        int arr[n];
        for(int i=0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i < n-2; i++)
        {
            for(int j=i+1; j < n-1; j++ )
            {
                for(int k=j+1; k < n; k++)
                {
                    if(arr[i]+arr[j]+arr[k] == sum)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}


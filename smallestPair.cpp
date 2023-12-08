#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int t=0; t < test; t++)
    {
        int n;
        cin >> n;
        int arr[n];
        int mn = INT_MAX;
        for(int i=0; i <n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i <n-1; i++)
        {
            for(int j=i+1; j < n;j++)
            {
                int sum = arr[i] + arr[j] + j -i;
                mn=min(mn,sum);
            }
        }
        cout << mn << endl;
    }
    return 0;
}

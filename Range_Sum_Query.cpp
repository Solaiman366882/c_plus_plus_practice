#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    vector <int> v(n);
    for(int i=0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i=0; i < t; i++)
    {
        int start_value,end_value;
        cin >> start_value >> end_value;
        int sum =0;
        for(int j=start_value -1; j < end_value; j++ )
        {
            sum += v[j];
        }
        cout << sum << endl;
    }

    return 0;
}

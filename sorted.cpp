#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        vector <int> v(n);
        for(int i=0; i < n; i++)
        {
            cin >> v[i];
        }
        for(int i=0; i < n; i++)
        {
            if(i == n-1)
            {
                continue;
            }
            if(v[i] > v[i+1])
            {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}


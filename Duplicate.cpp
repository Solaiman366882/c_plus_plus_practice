#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    for(int i=0; i<n ; i++)
    {
        vector <int>:: iterator it;
        it = find(v.begin()+i+1,v.end(),v[i]);
        if(it == v.end())
        {
            continue;
        }
        else {
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES" ;
    else cout << "NO";



    return 0;
}


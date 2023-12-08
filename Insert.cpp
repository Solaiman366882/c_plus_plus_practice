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
    int n2;
    cin >> n2;
    vector <int> v2(n2);
    for(int i=0; i < n2; i++)
    {
        cin >> v2[i];
    }
    int pos;
    cin >> pos;
    v.insert(v.begin()+pos,v2.begin(),v2.end());
    for(int val : v)
    {
        cout << val << " ";
    }

    return 0;
}


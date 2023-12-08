#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector <long long> v(n);
    for(int i=0; i < n; i++)
    {
        cin >> v[i];
    }
    vector <long long> pre(n);
    pre[0] = v[0];
    for(int i=1; i < n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        r--;
        l--;
        long long sum;
        if(l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum =  pre[r] - pre[l-1];
        }
        cout << sum << endl;
    }
    return 0;
}

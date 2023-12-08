#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    int counter =0;
    for(int i=0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int val:v)
    {
        auto it = find(v.begin(),v.end(),val+1);
        if(it == v.end())
        {
            continue;
        }
        else
        {
            counter +=1;
        }
    }
    cout  << counter;
}

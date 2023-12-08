#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v(26,0);
    string s;
    cin >> s;
    for(int i=0; i < s.length();i++)
    {
        int cc = s[i]-'a';
        v[cc]++;
    }
    for(int i=0; i < v.size() ; i++)
    {
        if(v[i] > 0)
        {
            char c = i+97;
            cout << c << " " << ':' << " " << v[i] << endl;
        }
    }
    return 0;
}

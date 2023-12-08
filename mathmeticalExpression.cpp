#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r;
    char c,q;
    cin >> a >> c >> b >> q >> r;
    if(c == '+')
    {
        if(a+b == r)
        {
            cout << "Yes";
        }
        else
        {
            cout << a+b;
        }
    }
    else if(c == '-')
    {
        if(a-b == r)
        {
            cout << "Yes";
        }
        else
        {
            cout << a-b;
        }
    }
    else
    {
        if(a*b == r)
        {
            cout << "Yes";
        }
        else
        {
            cout << a*b;
        }
    }
    return 0;

}

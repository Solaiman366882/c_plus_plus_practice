#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    sort(str,str+n);
    cout << str;
    return 0;
}

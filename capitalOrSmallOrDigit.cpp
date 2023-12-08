#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if(c >= '0' && c <= '9')
        cout << "IS DIGIT";
    else if(c >= 'A' && c <= 'Z')
        cout <<"ALPHA" << endl << "IS CAPITAL";
    else if(c >= 'a' && c <= 'z')
        cout <<"ALPHA" << endl << "IS SMALL";
    return 0;
}

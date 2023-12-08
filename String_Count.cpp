#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin , s);
    stringstream ss(s);
    int stringCount = 0;
    string word;
    while(ss >> word)
    {
        stringCount++;
    }
    cout << stringCount << endl;
    return 0;
}

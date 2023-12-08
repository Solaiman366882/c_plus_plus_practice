#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string word;
    stringstream ss(s);
    string jess =
    bool flag = false;
    while(ss >> word)
    {
        if(word == "Jessica")
           {
               flag = true;
               cout << "ndfsdkhfsk" << endl;
           }
    }
    if(flag)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO";
    }


    return 0;
}

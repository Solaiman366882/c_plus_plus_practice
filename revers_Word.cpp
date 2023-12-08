#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin , s);
    stringstream ss(s);
    string word;
    int flag = 0;

    while(ss >> word)
    {
        reverse(word.begin(),word.end());
        if(flag == 1)
        {
            cout << " ";
        }
        cout << word ;
        flag = 1;
    }
    return 0;
}

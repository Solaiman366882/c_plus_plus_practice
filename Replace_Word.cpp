#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    for(int i=0; i < n; i++)
    {
        string s;
        string word;
        cin >> s >> word;
        int place = s.find(word);
        while(place == -1)
        {
         s.replace(place,word.size(),"#");
         place  = s.find(word,place+1);
         cout << s << endl;
        }
    }



    return 0;
}

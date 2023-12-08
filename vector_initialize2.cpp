#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector <int> v;
    //vector <int> v(3);
    vector <int> v2(5,451);
    vector <int> v(v2);


    cout << v.size() << endl;
    for(int i=0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}

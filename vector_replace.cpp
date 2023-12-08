#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,54,45,568,2,4757,2,548,54,2,154,144,2,1};
    //replace(v.begin(),v.end(),2,100);
    //vector <int>:: iterator it;
    auto it=find(v.begin(),v.end(),100);
    if(it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for(int x:v)
    {
        cout << x << " ";
    }
    return 0;
}

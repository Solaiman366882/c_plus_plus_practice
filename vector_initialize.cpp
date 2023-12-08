#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector <int> v;
    //vector <int> v(5);
    //vector <int> v(5,6);
    int n=5;
    int a[n]= {10,20,30,40,50};
    vector <int> v2(n,10);
    //vector <int> v(v2);
    vector <int> v(a,a+n);


    cout << v.size() << endl;
    for(int i=0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

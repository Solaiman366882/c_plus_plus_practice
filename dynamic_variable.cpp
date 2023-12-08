#include<bits/stdc++.h>
using namespace std;

int * fun()
{
    int *n = new int;
    cout << "fun: " << n << endl;
    *n = 100;
    return n;
}

int main()
{
    int *a = new int ;
    *a =  10;
    cout << *a << endl;
    float *f = new float;
    *f = 1.2564;
    cout << *f << endl;
    int *p = fun();
    cout << "Main : " << p << endl;
    return 0;
}

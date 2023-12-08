#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    int *a =  new int;
    *a = 13023;
    cout << "fun: " << a << endl;
    return a;
}
int main()
{
    int *a = new int;
    *a =  103;
    cout << *a << endl;
    float *f =  new float;
    *f = 135.2344585;
    cout << *f << endl;
    int *p = fun();
    cout << "main : " << p << "value : " << *p << endl;
        return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >>b;
    int sum = a+b;
    int sub = a-b;
    long long int mul = (long long int)a*b;
    cout << a << " " << "+ " << b << " = " << sum << endl;
    cout << a << " * " << b << " = " << mul << endl;
    cout << a << " - " << b << " = " << sub << endl;
    return 0;
}


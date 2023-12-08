#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    float marks;
};
int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin >> a.roll >> a.marks;
    getchar();
    cin.getline(b.name,100);
    cin >> b.roll >> b.marks;
    cout << a.name << " " << a.roll << " " << a.marks;
    cout << b.name << " " << b.roll << " " << b.marks;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    float gpa;
};
int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin >> a.roll >> a.gpa;
    getchar();
    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa << endl << b.name << " " << b.roll << " " << b.gpa;
    return 0;
}

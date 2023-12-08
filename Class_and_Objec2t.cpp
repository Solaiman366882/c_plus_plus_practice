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
    Student a;
    char temp[100] = "Amena";
    strcpy(a.name,temp);
    int roll = 4;
    float gpa = 3.99;
    a.roll = roll;
    a.gpa = gpa;
    cout << a.name << " " << a.roll << " " << a.gpa;
    return 0;
}

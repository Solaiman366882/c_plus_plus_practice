#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a;
    a.roll = 10;
    a.cgpa = 4.36;
    char temp[100] = "Solaiman";
    strcpy(a.name,temp);
    cout << "Name: " << a.name << endl << "Roll :" << a.roll << endl << "CGPA: " << a.cgpa;
    return 0;
}

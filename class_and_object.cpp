#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    int roll;
    double cgpa;
    char name[100];
};
int main()
{
    Student a;
    char temp[100] = "Police";
    strcpy(a.name,temp);
    a.roll= 33;
    a.cgpa = 3.65;
    cout << "Name : " << a.name << endl << "Roll : " << a.roll << endl << "CGPA : " << a.cgpa;
    return 0;
}

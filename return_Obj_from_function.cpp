#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    float gpa;
    Student(int roll,int cls, float gpa)
    {
        this -> roll = roll;
        this -> cls = cls;
        this -> gpa = gpa;
    }

};

Student * fun()
{
    Student * newStudent = new Student(31,9,4.99);
    return newStudent;
}

int main()
{
    Student *rahim = fun();
    cout << rahim -> roll  << " " << rahim -> cls << " " << rahim -> gpa;
    return 0;
}

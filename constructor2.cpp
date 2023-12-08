#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    float gpa;
    Student(int roll, int cls, float gpa)
    {
        this -> roll = roll;
        this -> cls = cls;
        this -> gpa = gpa;

    }
};
int main()
{
    Student rahim(10,5,3.65);
    Student karim(1,5,4.99);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa ;
    return 0;
}

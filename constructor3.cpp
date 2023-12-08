#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    int result;
    Student(int roll, int cls, int result)
    {
        this -> roll=roll;
        this -> cls =  cls;
        this -> result = result;
    }

};
    int main()
    {
        Student rahim(12,8,3652);
        Student karim(11,8,4233);
        cout << rahim.roll << " " << rahim.cls << " " << rahim.result << endl;
        cout << karim.roll << " " << karim.cls << " " << karim.result ;
        return 0;
    }

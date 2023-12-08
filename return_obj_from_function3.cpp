#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    int result;
    Student(int roll,int cls, int result)
    {
        this -> roll = roll;
        this -> cls = cls;
        this -> result = result;
    }

};
Student * fun()
{
   Student * newStudent = new Student(20,2,3654);
   return newStudent;
}
int main()
{
    Student * rahim = fun();
    cout << rahim-> roll << " " << rahim -> cls << " " << rahim -> result;
    return 0;
}

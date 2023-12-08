#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;
	Studnet(char *name, int roll , char section , int math_marks , int cls)
	{
	    strcpy(this -> name,name);
	    this -> roll = roll;
	    this -> section = section;
	    this -> math_marks = math_marks;
	    this -> cls = cls;
	}

};
int main()
{
    Student a("Solaiman",12,'b',98,9);
    Student b("Rifat",2,'b',88,9);
    Student c("abdur Rahim",16,'b',75,9);
    if(a.math_marks > b.math_marks && a.math_marks > c.math_marks)
    {
        cout << a.name;
    }
    else if(b.math_marks > a.math_marks && b.math_marks > c.math_marks)
    {
        cout << b.name;
    }
    else
    {
        cout << c.name;
    }
    return 0;
}

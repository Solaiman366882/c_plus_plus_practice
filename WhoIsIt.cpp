
#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
    char name[100];
    int id;
    int marks;
    char section;
    //Student(void)
    //{
        //char dname[100];
       // int id,marks;
        //char name[100],section;
        //cin >> id >> name >> section >> marks;
        //this -> id = id;
        //strcpy(this -> name,name);
        //this -> section = section;
        //this -> marks = marks;
    //}
};

int main()
{
    int test;
    cin >> test;
    for(int t=0; t < test; t++)
    {
        Student s1;
        Student s2;
        Student s3;
        for(int i=0; i < 3; i++)
        {
            if(i==0)
            {
                int id, marks;
                char name[100],section;
                cin >> id >> name >> section >> marks;
                 s1.id = id;
                 strcpy(s1.name,name);
                 s1.section = section;
                 s1.marks = marks;
            }if(i==1)
            {
                int id,marks;
                char name[100],section;
                cin >> id >> name >> section >> marks;
                 s2.id = id;
                 strcpy(s2.name,name);
                 s2.section = section;
                 s2.marks = marks;
            }if(i==2)
            {
                 int id,marks;
                char name[100],section;
                cin >> id >> name >> section >> marks;
                s3.id = id;
                 strcpy(s3.name,name);
                 s3.section = section;
                 s3.marks = marks;
            }
        }

        if(s1.marks == s2.marks && s1.marks == s3.marks)
        {
            if(s1.id < s2.id && s1.id < s3.id)
            {
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.marks << endl;
            }
            else if(s2.id < s1.id && s2.id < s3.id)
            {
                cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.marks << endl;
            }
            else
            {
                cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.marks << endl;
            }
        }
        else if(s1.marks > s2.marks && s1.marks > s3.marks)
        {
             cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.marks << endl;
        }
        else if(s2.marks > s1.marks && s2.marks > s3.marks)
        {
           cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.marks << endl;
        }
        else if(s3.marks > s1.marks && s2.marks < s3.marks)
        {
            cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.marks << endl;
        }
        else if(s1.marks > s2.marks && s1.marks == s3.marks)
        {
            if(s1.id < s3.id)
            {
                 cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.marks << endl;
            }
            else
            {
               cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.marks << endl;
            }
        }
        else if(s1.marks > s3.marks && s1.marks == s2.marks)
        {
            if(s1.id < s2.id)
            {
                cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.marks << endl;
            }
            else
            {
                cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.marks << endl;
            }
        }
        else if(s2.marks > s1.marks && s2.marks == s3.marks)
        {
            if(s2.id < s3.id)
            {
                cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.marks << endl;
            }
            else
            {
                cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.marks << endl;
            }
        }
    }


    return 0;
}

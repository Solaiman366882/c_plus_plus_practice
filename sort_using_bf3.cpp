#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;

};
bool mncmp(Student a, Student b)
{
    if(a.marks <= b.marks) return true;
    else return false;
}
bool mxcmp(Student a, Student b)
{
    if(a.marks >=  b.marks) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a,a+n,mncmp);
    cout << endl << endl;
    for(int i=0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    sort(a,a+n,mxcmp);
    cout << endl << endl;
    for(int i=0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}
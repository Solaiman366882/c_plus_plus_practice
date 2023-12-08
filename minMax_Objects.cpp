#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    Student mn;
    mn.marks = INT_MAX;
    Student mx;
    mx.marks = INT_MIN;
    for(int i=0; i < n; i++)
    {
        if(a[i].marks < mn.marks)
        {
            mn = a[i];
        }
        if(a[i].marks > mx.marks)
        {
            mx = a[i];
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    return 0;

}

/*
sakib 8 89
rakib 4 40
sunny 9 98
sokhina 2 99

*/

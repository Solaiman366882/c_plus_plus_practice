#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i< n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }
    for(int i=0,j=n-1; i != j ; i++,j--)
    {
        if(i > j)
            break;
        Student temp = a[i];
        a[i].section = a[j].section;
        a[j].section = temp.section;
    }
    for(int i=0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << endl;
    }

    return 0;
}


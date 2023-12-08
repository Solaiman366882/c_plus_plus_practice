#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }
    for(int i=0; i < n-1; i++)
    {

        for(int j=i+1; j< n; j++)
        {

          int tm1 = a[i].math_marks + a[i].eng_marks;
          int tm2 = a[j].math_marks + a[j].eng_marks;

          if(tm1 == tm2)
          {
              if(a[i].id > a[j].id)
              {
                  swap(a[i],a[j]);
              }
          }
          else if(tm1 < tm2)
          {
              swap(a[i],a[j]);
          }
        }
    }
    for(int i=0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}


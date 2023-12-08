
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int k =n;
    int s = n-2;
    for(int i=0; i < n/2; i++)
    {
       for(int j=0; j < n; j++)
       {
           if(j==0)
           {
               cout << "\\";
           }
           else if(j == n-1)
           {
               cout << "/";
           }
           else
           {
               cout << " ";
           }
       }
    }

    return 0;
}

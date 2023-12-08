#include <bits/stdc++.h>

using namespace std;



int main()
{
   char s[100001] ;


   while(cin.getline(s,100001))
   {
       int len =strlen(s);
       int strCount[26] = {0};
       //sort(s,s+len);
       for(int i=0; i < len; i++)
       {
           int value = s[i]-97;
           strCount[value]++;
       }
       for(int i=0; i < 26; i++)
       {
           if(strCount[i] > 0)
           {
               for(int j=0; j < strCount[i]; j++)
               {
                   char c = i+97;
                   cout << c;
               }
           }
       }
       cout << endl;
   }


    return 0;
}

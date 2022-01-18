#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s,a;
    int len, j=0;

    cin >> a;
    len = a.length();


    for(int i=0 ; i<len ; i++)
    {

        if(i%2 == 0)
        {
            s.push_back(a[i]);
        }

    }

    sort(s.begin(),s.end());

     for(int i=0;i<s.length()-1;i++)
     {
          cout << s[i] << "+";
     }

     cout << s[s.length()-1] << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    string a,b;
    cin >> a;

     for(int i=0;i<a.length();i++)
     {
          b.push_back(tolower(a[i]));
     }

    for(int i=0; i<b.length()-1;i++)
    {
       for(int j=i+1; j<b.length();j++)
       {
           if(b[i] == b[j])
        {
            n++;
            break;
        }
       }

    }

    int len;
    len = ((b.length()) - n);

     if(len%2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else

        cout << "IGNORE HIM!" << endl;


    return 0;
}

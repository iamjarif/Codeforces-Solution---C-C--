#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,c;
    int upper=0,lower=0;
    cin >> a;

    for(int i=0; a[i]!=0; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            upper++;
        }
        else if(a[i] >= 'a' && a[i] <= 'z')
        {
            lower++;
        }
    }

    for(int i=0; i<a.length(); i++)
    {
         if(lower>=upper)
    {
        c.push_back(tolower(a[i]));
    }
    else if(lower<upper)
    {
        c.push_back(toupper(a[i]));
    }
    }


    cout << c;

    return 0;
}

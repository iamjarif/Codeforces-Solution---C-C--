#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    int i=0;

    cin >> a;

    b.push_back(toupper(a[0]));

    for(i=1; i<a.length();i++)
    {
        c.push_back(a[i]);
    }

    cout << b << c ;

    return 0;
}

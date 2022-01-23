#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, x, y, p=0, s[1000];
    cin >> a;


    for(int i=0; i<a; i++)
    {
        cin >>x >>y;
        p=p-x+y;
        s[i] = p;

    }

    for(int i = 1;i < a; i++)
    {
        if(s[0] < s[i])
        s[0] = s[i];
    }

    cout << s[0];

    return 0;
}

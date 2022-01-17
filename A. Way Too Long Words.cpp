#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,x,len;
    char st[100];
    cin >> x;

    for(i=0; i<x; i++)
    {
        cin >> st;
        len = strlen(st);

        if(len<=10)
        {
            cout << st << endl;
        }
        else
        {
            cout << st[0] << len-2 << st[len-1] << endl;
        }

    }

    return 0;
}

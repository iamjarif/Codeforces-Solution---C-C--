#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int flag = 0;

    cin >> a;

    for(int i=0;i<a.length(); i++)
    {
         if(a[i] == '4' || a[i] == '7')
        {
            flag++;
        }
    }

    if(flag == 7 || flag == 4)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}

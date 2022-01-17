#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    cin >> x;

    if(x>=1 && x<=100)
    {
        if(x!= 2 && x%2 == 0)
        {
        cout << "YES";
        }
        else
        cout << "NO";
    }


    return 0;
}

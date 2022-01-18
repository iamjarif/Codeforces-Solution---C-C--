#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n, num=0;

    cin >> n >> a;


    for(int i=0; i<n; i++)
    {
        if(a[i] == a[i+1])
        {
            num++;
        }

    }

        cout << num << endl;


    return 0;
}

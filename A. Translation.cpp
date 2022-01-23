#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin >> a >> c;


    for(int i=0; i<a.length(); i++)
   {
    b.push_back(a[i]);
   }

    reverse(b.begin(),b.end());

    if(b==c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

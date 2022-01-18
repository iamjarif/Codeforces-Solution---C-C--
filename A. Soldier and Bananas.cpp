#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,dollar=0;
    cin >> a >> b >> c;

    for(int i=1; i<c+1; i++)
    {
        dollar += (i*a);
    }

    if((dollar-b) > 0)
    cout << (dollar-b) << endl;
    else
    cout << 0 << endl;

    return 0;
}

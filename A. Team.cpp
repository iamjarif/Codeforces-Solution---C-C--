#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,a,b,c,solve=0;

    cin >> x;


        for(int i=0; i<x ; i++)
    {
        scanf("%d%d%d", &a, &b, &c );
        if((a==1 && b==1) || (a==1 && c==1) || (c==1 && b==1) ||  (a== 1 && c==1 && b==1))
           {
               solve++;
           }
    }


    cout << solve;

    return 0;
}

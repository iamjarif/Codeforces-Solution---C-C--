#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a[100], winner=0;

    scanf("%d %d", &n, &k);

    if(k>=1 && n<=50 && k<=n)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(int i=0; i<n ; i++)
        {
            if(a[i]>= a[k-1] && a[i]>0)
                winner++;
        }
    }

    cout << winner;

    return 0;
}

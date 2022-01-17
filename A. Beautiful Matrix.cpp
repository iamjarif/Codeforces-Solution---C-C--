#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5], ai, aj, n;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j]==1)
            {
                ai = i;
                aj = j;
            }

        }
    }

    n=abs(ai-2)+abs(aj-2);

    cout << n;

    return 0;
}

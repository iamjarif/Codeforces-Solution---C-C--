#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    int p=2, ans =0;

    scanf("%d %d", &m, &n);

    if(m>=1 && n<=16 && m<=n)
    {
        ans = ((m*n)/p);

    }

    cout << ans;

    return 0;
}

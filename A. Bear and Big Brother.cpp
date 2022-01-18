#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,b,n=0;
    scanf("%d %d", &l,&b);

    while(l<=b)
    {
         b=(b*2);
         l=(l*3);
         n++;
     }

    printf("%d",n);

    return 0;
}

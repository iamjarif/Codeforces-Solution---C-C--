#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,step=0,need=0;
     cin >> a;

    if(a<=10)
    {
        need = (a-5);
        if(need <= 0)
    {
        step =1;
    }
    else if(need<=5)
    {
        step =2;
    }
    }

    else if(a>10)
    {
        double s= double(a)/5.0;
        int p = s;
        double temp = s-p;


         if(temp != 0)
        {
            step = (s+1);
        }
        else
            step =s;
       }

        cout << step;


    return 0;
}

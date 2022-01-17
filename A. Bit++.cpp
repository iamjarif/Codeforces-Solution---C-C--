#include<bits/stdc++.h>
using namespace std;

int main()
{

int n,s=0;
char x[100];
scanf("%d",&n);

for(int i=0;i<n;i++)
{
    scanf("%s",&x);

if((x[0] == '+' && x[1] == '+') || (x[1] == '+' && x[2] == '+'))
{
    s++;
}
else if((x[0] == '-' && x[1] == '-') || (x[1] == '-' && x[2] == '-'))
{
    s--;
}

else
    break;



}

cout<<s<<endl;

 return 0;
}

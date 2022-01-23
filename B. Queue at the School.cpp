 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int a,b;
     string x;
     cin >> a >> b;
     cin >> x;

     for(int i=0;i<b;i++)
     {
         for(int j=0;j<a;j++)
         {

             if(x[j] == 'B' && x[j+1] == 'G')
             {
                 x[j] = 'G';
                 x[j+1] = 'B';
                 j++;
               }

         }

     }

     cout << x;

     return 0;
 }

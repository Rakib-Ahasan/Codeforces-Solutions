#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long int n;
       cin>>n;
       if(n%2050 != 0)
        cout<<-1<<endl;
       else
       {
           n /=2050;
           int result = 0;
           while(n != 0)
           {
               result += (n%10);
               n /= 10;
           }
           cout<<result<<endl;
       }

   }
}

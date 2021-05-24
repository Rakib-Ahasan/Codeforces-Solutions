#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string num,reslt;
    int a=0;
    cin>>num;
    for(int i=0; i< num.length(); i++ )
    {
        if(num[i]=='4' || num[i]=='7')
        {
            a++;
        }
    }
   if(a==4 || a==7) cout<<"YES";
   else cout<<"NO";
}

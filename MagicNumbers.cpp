#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
   if(s[0]!='1')
    {
        cout<<"NO";
        return 0;
    }
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]=='1')
        {
            if(s[i]=='1' || s[i]=='4') continue;
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        else if(s[i-1] =='4')
        {
            if(s[i]=='4' && s[i-2]!='4') continue;
            else if(s[i]=='4' && s[i-2]=='4')
            {
                cout<<"NO";
                return 0;
            }
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}

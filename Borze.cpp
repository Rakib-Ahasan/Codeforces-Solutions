#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //Word[j]!='\0'
    string s,result;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='.' )
        {
            result += "0";
        }
        else if(s[i]=='-'&&s[i+1]=='.')
        {

            result += "1";
            i++;
        }
        else if(s[i]=='-'&&s[i+1]=='-')
        {
            result += "2";
            i++;
        }
    }

    cout<<result<<endl;
}



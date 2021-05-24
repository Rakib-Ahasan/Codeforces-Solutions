#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int u=0,l=0;
    //char s[50];
    string s;
    cin>>s;
    for(int i=0; i<=s.length(); i++)
    {
        if(isupper(s[i]))
            u++;
        if(islower(s[i]))
            l++;
    }

    for(int i=0; i<=s.length(); i++)
    {
        if(u>l) putchar(toupper(s[i]));
        else
            putchar(tolower(s[i]));
    }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,sum=0,month=0;
    int water[12];
    cin>>k;
    for(int i=0; i<12; i++)
    {
        cin>>water[i];
    }
    sort(water,water+12);

    for(int i= 11; i>=0; i--)
    {

        if(k==0) break;
        {
            sum += water[i];
        month++;
        }
        if(sum>=k) break;
    }
    if(sum>=k) cout<<month;
    else cout<<-1;

}

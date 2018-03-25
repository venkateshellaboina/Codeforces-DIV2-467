#include<bits/stdc++.h>
#define ll long long int
#define FI(i,l,r) for(int i=l;i<r;i++)
#define FD(i,l,r) for(int i=r-1;i>=l;i--)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    string str;
    cin>>str;
    int i=0;
    int flag=0;
    while(str[i]=='?' && i<n)
    {
        i++;
    }
    if(i==n)
    {

        cout<<"Yes"<<endl;
        return 0;
    }
    ll cnt=0,cnt2=0;
    while(i<n)
    {
        ll len=0;

        if(str[i+1]=='?' && i<n)
        {
            i++;
            while(str[i]=='?' && i<n)
            {
                len++;
                i++;
            }

            cnt2++;

        }
        else if(i<n && str[i]== str[i+1])
        {

            flag=1;
            break;
        }
        else
        {
            i++;
            continue;
        }

        if( len==1 && str[i]!=str[i-2] && i<n)
        {
            cnt++;
        }



    }
    if(cnt==cnt2 || flag==1)
    {

        cout<<"No"<<endl;
    }
    else
    {

        cout<<"Yes"<<endl;
    }
    return 0;
}

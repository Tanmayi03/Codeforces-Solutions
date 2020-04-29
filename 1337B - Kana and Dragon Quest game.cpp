#include <iostream>
using namespace std;
 
bool hits(int x,int n,int m)
{
    if(x>20 && n>0)
    {
        int k = x/2;
        x = k + 10;
        n--;
        hits(x,n,m);
    }
    else if(x<=20 && m>0)
    {
        x = x-10;
        m--;
        hits(x,n,m);
    }
    else if(x>20 && n==0 && m>0)
    {
        x = x-10;
        m--;
        hits(x,n,m);
    }
    else
    {
        if(x<=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
 
}
 
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int x,n,m;
        cin>>x>>n>>m;
        bool p = hits(x,n,m);
        if(p)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}

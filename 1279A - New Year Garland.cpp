#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[3];
        for(ll i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[2] <= a[0]+a[1]+1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}

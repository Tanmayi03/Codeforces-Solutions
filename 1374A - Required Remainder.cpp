#include <iostream>
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
        long long int x,y,n;
        cin>>x>>y>>n;
        long long int q = n/x;
        long long int k = (x*q)+y;
        while(k > n)
        {
            k -= x;
        }
        cout<<k<<endl;
        t--;
    }
    return 0;
}

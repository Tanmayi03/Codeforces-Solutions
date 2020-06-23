#include <iostream>
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
        long long int n;
        cin>>n;
        if(n%4 == 0)
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

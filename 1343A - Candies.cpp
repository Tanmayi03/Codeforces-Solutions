#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        long long n;
        cin>>n;
        long long x,k;
        for(k=2; ;k++)
        {
            long long int p = pow(2,k);
            if(n % (p - 1) == 0)
            {
                x = n / (p - 1);
                break;
            }
        }
        cout<<x<<endl;
        t--;
    }
    return 0;
}

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
        long long int k = 0;
        while(n != 1)
        {
            if(n%6 == 0)
            {
                n /= 6;
                k++;
            }
            else if(n%3 == 0)
            {
                n *= 2;
                k++;
            }
            else
            {
                k = -1;
                break;
            }
        }
        cout<<k<<endl;
        t--;
    }
    return 0;
}

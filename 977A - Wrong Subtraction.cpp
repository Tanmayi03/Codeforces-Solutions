#include <iostream>
using namespace std;
 
int subtract(int n,int k)
{
    while(k>0)
    {
        if(n%10==0)
        {
            n = n/10;
        }
        else
        {
            n = n-1;
        }
        k--;
    }
    return n;
}
 
int main()
{
    int n,k;
    cin>>n>>k;
    int x = subtract(n,k);
    cout<<x<<endl;
    return 0;
}

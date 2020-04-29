#include <iostream>
using namespace std;
 
int big(int a,int b)
{
    int y=0;
    while(a<=b)
    {
        a = 3*a;
        b = 2*b;
        y++;
    }
    return y;
}
 
int main()
{
    int a,b;
    cin>>a>>b;
    int k = big(a,b);
    cout<<k<<endl;
    return 0;
}

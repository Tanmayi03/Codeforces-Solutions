#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a,b;
        cin>>a>>b;
        int m1 = max(2*a,b);
        int m2 = max(a,2*b);
        int min = m1;
        if(m2 < min)
        {
            min = m2;
        }
        cout<<min*min<<endl;
        t--;
    }
    return 0;
}

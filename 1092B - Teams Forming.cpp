#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int s=0;
    for(int i=0;i<n;i+=2)
    {
        int k = a[i+1]-a[i];
        s += k;
    }
    cout<<s<<endl;
    return 0;
}

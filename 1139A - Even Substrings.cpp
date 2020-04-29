#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    long int n;
    cin>>n;
    string s;
    cin>>s;
    int c = 0;
    for(int i=0;i<n;i++)
    {
       if(s[i]%2==0)
       {
           c = c+i+1;
       }
    }
    cout<<c<<endl;
    return 0;
}

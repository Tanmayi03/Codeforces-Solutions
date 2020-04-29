#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int l = s.length();
    int f = 0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a')
        {
            f++;
        }
    }
    if(f>(l/2))
    {
        cout<<l<<endl;
    }
    else
    {
        cout<<(2*f)-1<<endl;
    }
    return 0;
}

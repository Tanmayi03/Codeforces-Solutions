#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
    set<char> p;
    for(int i=0;i<s.length();i++)
    {
        if(97<=int(s[i]) && int(s[i])<=122)
        {
            p.insert(s[i]);
        }
    }
    cout<<p.size()<<endl;
    return 0;
}

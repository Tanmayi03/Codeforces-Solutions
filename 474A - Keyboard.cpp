#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string ini = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(ch == 'R')
        {
            s[i] = ini[ini.find(s[i])-1];
        }
        else
        {
            s[i] = ini[ini.find(s[i])+1];
        }
    }
    cout<<s<<endl;
}

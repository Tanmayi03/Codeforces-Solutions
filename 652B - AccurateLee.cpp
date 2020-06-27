#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
    while(t>0)
    {
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        string k;
        k = s;
        sort(k.begin(),k.end());
        if(k == s)
        {
            cout<<s<<endl;
        }
        else
        {
            long long int a = 0;
            long long int b = 0;
            long long int i=0;
            while(i < n && s[i] == '0')
            {
                a++;
                i++;
            }
            a += 1;
            i = s.length()-1;
            while(i>=0 && s[i] == '1')
            {
                b++;
                i--;
            }
            string p = " ";
            p.clear();
            while(a > 0)
            {
                p += '0';
                a--;
            }
 
            while(b > 0)
            {
                p += '1';
                b--;
            }
            cout<<p<<endl;
        }
        t--;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        string s;
        cin>>s;
        int l = s.length();
        int zero = 0;
        int one = 0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if((zero==l)||(one==l))
        {
            cout<<"0"<<endl;
        }
        else
        {
            int si,li;
            if(l<=2)
            {
                cout<<"0"<<endl;
            }
            else
            {
                for(int i=0;i<l;i++)
                {
                    if(s[i]=='1')
                    {
                        si = i;
                        break;
                    }
                }
 
                for(int i=l-1;i>=0;i--)
                {
                    if(s[i]=='1')
                    {
                        li = i;
                        break;
                    }
               }
 
               int z = 0;
               for(int i=si;i<li;i++)
               {
                   if(s[i]=='0')
                   {
                       z++;
                   }
               }
               cout<<z<<endl;
           }
        }
        t--;
    }
    return 0;
}

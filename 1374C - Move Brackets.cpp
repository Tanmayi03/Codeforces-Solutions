#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k = 0;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                k++;
            }
            else
            {
                k--;
                if(k<0)
                {
                    k = 0;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

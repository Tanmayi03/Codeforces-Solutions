#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        vector<int> v;
        for(int i=0;i<n-1;i++)
        {
            int k = abs(s[i]-s[i+1]);
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
        t--;
    }
    return 0;
}

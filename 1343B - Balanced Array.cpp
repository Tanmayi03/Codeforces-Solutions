#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        long long int n;
        cin>>n;
        vector<long long int> v;
        int p = n/2;
        if((p%2) == 0)
        {
            long long int s1,s2;
            s1 = 0;
            s2 = 0;
            for(int i=2;i<=n;i+=2)
            {
                s1 += i;
                v.push_back(i);
            }
 
            int j = 1;
            for(int i=1;i<(n/2);i+=1)
            {
                s2 += j;
                v.push_back(j);
                j += 2;
            }
            int k = s1 - s2;
            v.push_back(k);
            vector <long long int> :: iterator it;
            cout<<"YES"<<endl;
            for(it = v.begin(); it != v.end(); it++)
            {
                cout<<*it<<" ";
            }
            cout<<endl;
        }
        else if(n==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}

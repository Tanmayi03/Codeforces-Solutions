#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    long long int n,b,d;
    cin>>n>>b>>d;
    vector<long long int> v;
    for(long long int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        if(x <= b)
        {
            v.push_back(x);
        }
    }
 
    long long int e = 0;
    long long int i=0;
    long long int s = 0;
    while(i<v.size())
    {
        while(s<=d && i<v.size())
        {
            s += v[i];
            i++;
        }
        if(s > d)
        {
            e++;
            s = 0;
        }
    }
    
    cout<<e<<endl;
}

#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int a,b;
        cin>>a>>b;
        int k;
        k = a%b;
        if(k!=0)
        {
            k= b-k;
        }
        cout<<k<<endl;
        T--;
    }
    return 0;
}

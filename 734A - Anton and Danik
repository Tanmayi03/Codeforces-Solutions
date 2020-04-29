#include <iostream>
#include <string>
#include <map>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>f;
    f.insert({'A',0});
    f.insert({'D',0});
    for(int i=0;i<n;i++)
    {
        f[s[i]]++;
    }
    map<char,int> :: iterator it1;
    map<char,int> :: iterator it2;
    it1 = f.find('A');
    it2 = f.find('D');
    if(it1->second > it2->second)
    {
        cout<<"Anton"<<endl;
    }
    else if(it1->second < it2->second)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}

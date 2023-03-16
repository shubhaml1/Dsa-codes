#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    // printing the elements in the set
    cout<<"printing the sets :"<<endl;
    for( auto i:s)
        cout<<i<<" ";
    cout<<endl;
    for(auto i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
   
}
    
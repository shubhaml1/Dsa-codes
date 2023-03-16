#include<iostream>
using namespace std;
#include<string>

int main()
{  
    string a = "1234";
    for(int i = 0 ; i< a.size(); i++)
    {
        if(a[i] == to_string(i))
        cout<<a[i]<<" ";
    }
   

}
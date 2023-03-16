#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter a number";
    cin>>n;
    
    int i = 1, j ;
    while(i<= n)
    {   j = 1;
        while(j<= i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
    i++;
    }
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{   int n;
    cin>>n;
    int arr[n];
    vector<int> chk;
    cout<<"enter the elements in array"<<endl; 
    for(int i=0;i<n;i++){cin>>arr[i];}

    for(int i=0;i<n;i++)
    {   if( i == arr[i])
            chk.push_back(i);
    }
    
    for(int i:chk)
    {cout<<i<<" ";}
}
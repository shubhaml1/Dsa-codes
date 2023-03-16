#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    // vector<int> v;
    // vector<int> a(5,1);
    // cout<<"print a vector "<<endl;
    // for(int i:a)
    // {
    //     cout<<i<<" ";
    // } cout<<endl;

    // vector<int> last(a);
    // cout<<"copied element"<<endl;
    // for(int i:last)
    // {
    //     cout<<i<<" ";
    // } cout<<endl;

     
    // cout<<"Capacity->"<<v.capacity()<<endl;

    // v.push_back(1);
    // cout<<"Capacity->"<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"Capacity->"<<v.capacity()<<endl;

    // v.push_back(3);
    // cout<<"Capacity->"<<v.capacity()<<endl;
    // cout<<"Size->"<<v.size()<<endl;

    // cout<<"Element at index 0->"<<v.at(0)<<endl;
    // cout<<"Element at index 2->"<<v.at(2)<<endl;
    // cout<<"Element at index front->"<<v.front()<<endl;
    // cout<<"Element at index back->"<<v.back()<<endl;

    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // } cout<<endl;

    // v.pop_back();
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // } cout<<endl;

    // cout<<v.size()<<endl;
    // // v.clear();
    // // cout<<v.size();
    // v.push_back(3);
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // } cout<<endl;
    // int n;
    // for(int i = 0;i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // } cout<<endl;

    vector<vector<int>> v = {{1,3},{1,5},{1,6}};
    for(auto i,j:v){
        cout<<i<<endl;
    }
  
   

    


}
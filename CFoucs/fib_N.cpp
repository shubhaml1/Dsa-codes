#include<iostream>
using namespace std;

int main()
{   int n;
    cin>>n;
    int var_prev = 0, var_curr = 1;
    if(n == 1){ cout<<var_prev;}
    else
    {   cout<<var_prev<<" ";
        while(n > 1)
    {
        int var_next = var_prev + var_curr ;
        cout<<var_next<<" ";
        var_prev = var_curr;
        var_curr = var_next;
        n--;
    }
     
    }
    
}
#include<iostream>
using namespace std;
#include<math.h>
int main()
{   int n;
    cin>>n;
    int rev = 0, rem = 0;
    while(n)
    { 
        rem = n%10;
        n = n/10;
        if(rev < INT32_MIN/10 || rev > INT32_MAX/10 )
            cout<<"overflow";
        else{rev = rev*10 + rem;}
    }
    cout<<rev;

    
}
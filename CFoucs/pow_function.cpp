#include<iostream>
using namespace std;

int main()
{
    int exp;
    cout<< "exp; ";
    cin>>exp;
    int base;
    cout<< "base: ";
    cin>>base;
    double ans = 1;
    int chk = abs(exp);
    while(chk)
    {
        ans = ans*base;
        chk--;
    }
    if(exp>0)
    cout<<ans;
    else
    cout<<1/ans;

}
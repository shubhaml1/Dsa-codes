#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;

    int i=2;
    int j=2;

    while (j<n)
    {
        int flag=0;
        i = 2;

        /* prime */
        while (i<j)
        { 
            if(j%i==0)
            {
                flag=1;
                break;
            }
            i++;
        }

        if(flag==0){cout<<j<<endl;}
        j++;
    }
            
}


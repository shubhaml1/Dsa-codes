#include<iostream>
using namespace std;

int main()
{   int n;
    cin>>n;
    
    if(n>0)
    {
        while(n)
        {   
            if(n%2 == 0)
            {   
                n = n/2;
                if(n == 1)
                {
                    cout<<"IT's in the power of two";
                    
                }

            }

            else if(n==1)
            {
                cout<<"IT's in the power of two";
                
            }

            else
            {
                cout<<"False";
            }
        }

    }
    return 0;
}
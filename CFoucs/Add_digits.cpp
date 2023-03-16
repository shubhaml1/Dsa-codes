#include<iostream>
using namespace std;
int addDigits(int sum) ;
int main()
{   int num;
    cin>>num;
    int sum = 0;
    int output;
    output = addDigits(sum);
    while(output > 9)
    {
     sum = addDigits(sum);
    }
    cout<<sum;
    
   

}
int addDigits(int sum)
    { 
        while(num)
    { 
        int rem = num%10;
        num = num/10;

        sum = sum + rem;
    }
    return sum;
}
#include<iostream>
using namespace std;

int main()
{   int arr[] = {2, 3, 5, 6, 7};
    int brr[] = &arr[];

    for(int i=0;i<5;i++)
    {
        cout<<brr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int input_array(int n);
// int print_array(int arr[],int n);

int main()
{  int n;
    cout<<"Enter ARRAy size :";
    cin>>n;
    int arr[n];
    input_array(n);
    print_array(arr, n);   
}  

int input_array(int n)
{   int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

/*  int print_array(int gulu[],int n)
{
    for(int i = 0; i<=n-1; i++)
    { 
        cout<<gulu[i];
    }

} */

/* int main()
{   int start = 0, adj = 1;
    int arr[] = {3, 4, 5, 6 ,7, 5};

    
    while(adj< 6)  
    {   swap(arr[start], arr[adj]);
        start += 2;
        adj += 2;
    }

    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }


} */
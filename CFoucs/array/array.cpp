#include<iostream>
using namespace std;
void input_array(int arr[], int n);
void print_array(int arr[], int n);
void max_min(int arr[], int n);
void reverse_array(int arr[], int n);
void sort01(int arr[], int n);

int main()
{   int n = 9;
    int arr[n] = {0, 1, 0, 1, 0, 1, 1, 0, 1 };
    // cout<<"Taking input from the user"<<endl;
    // input_array(arr, n);
    // cout<<"Displaying elements in array"<<endl;
    // print_array(arr, n);
    // cout<<endl;
    
    // max_min(arr, n);
    // reverse_array(arr, n);
    // cout<<"Displaying elements in array"<<endl;
    // print_array(arr, n);

    // input_array(arr, n);
    // cout<<"Displaying elements in array"<<endl;
    // print_array(arr, n);
    // cout<<endl;
    cout<<"given array"<<endl;
    print_array(arr, n);
    sort01(arr, n);
    print_array(arr, n);
    

}

void print_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void max_min(int arr[], int n)
{   int max = INT32_MIN, min = INT32_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]> max){max = arr[i];}
        if(arr[i]< min){min = arr[i];}
    }
    cout<<"max : "<<max<<endl;
    cout<<"min : "<<min;
}

void input_array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void reverse_array(int arr[], int n)
{   int start = 0, end = n-1;
    while(start<end)
    {
        swap(arr[start], arr[end]);
        start += 1;
        end -= 1;
    }
}

void sort01(int arr[], int n)
{   int start= 0, end= n-1;
    while(start<end)
    {
        //to get the pointer at desired loc(when loc = 1)
        while(arr[start] == 0 && start<end)start++; 
        //to get the pointer at desired loc(when loc = 0)
        while (arr[end]==1 && start<end)end--;
        if(start<end)
        {   swap(arr[start], arr[end]); // swap when both elements gets in desired position
            start++;
            end--;
        }

    }
}

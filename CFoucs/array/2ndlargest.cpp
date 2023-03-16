#include<iostream>
using namespace std;

int main()
{   int arr[] = {12, 35, 1, 10, 34, 1};
    int n = 6;
    int max1 =0, max2 =0;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]>max1)
	    max1 = arr[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(arr[i]!= max1)
	    max2 = max(arr[i], max2);
	}
    if(max2==0)cout<<"-1";
    else
    cout<<max2;
}
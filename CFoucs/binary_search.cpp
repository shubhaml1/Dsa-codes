#include <iostream>
using namespace std;

int pivot(int arrp[], int n)
{
    int s = 0, e = n - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arrp[mid] >= arrp[0])
        {
            s = mid+1;
        }
        // mid is greater than key
        else
            e = mid;
    }
    return s;
}

int firstocc(int arr1[], int n, int key)
{
    int s = 0, e = n-1;
    int mid;
    while (s < e)
    {
        mid = s + (e - s) / 2;
      
      
        {
            return mid;
        }

        else if (mid > key)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }
}

int binarysearch(int arr[], int n, int k, int s, int e)
{

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == k)     // element matches ?
        {
            return mid;        // position get returned
        }
        
        else if (arr[mid] > k) // left me jao
            e = mid - 1;
        else                    // right me jao
            s = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {11,13,15,17,18,19};
    int odd[] = {1, 3, 5, 7, 9, 11};
    
    int n = 6, k = 11, iok;
// searching firstocc in rotated and sorted array
    // int first_occ = firstocc(arr, n, k);
    // cout<<"first occrence of element is: "<<first_occ<<endl;

// search pivot element index in (sorted + rotated array)
    int index = pivot(arr, n);
    cout<<"Pivot index is :"<<index<<endl;

    if(k>=arr[0]&&k<=arr[index-1])
        iok = binarysearch(arr,n, k, 0, index-1);
    else
        iok = binarysearch(arr, n, k, index, n-1);

    cout<<"element found at index: "<<iok<<endl;


}
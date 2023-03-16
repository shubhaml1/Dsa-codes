#include<iostream>
using namespace std;
int sum(int n,int array[]){
    if(n==0){
        return 0;
    }
    if(n==1){
        return array[0];
    }
    if(n>1){
    int k;
    k=array[0]+sum(n-1,array+1);
    return k;
    }
}
int main(){
    int array[5]={5,2,3,3,4};
    int arraysize= sizeof(array)/sizeof(array[0]); // gives the array size.
    int output = sum(arraysize,array);
    cout<<output;
}


// // C++ program to find sum of array
// // elements using recursion.
// #include <stdio.h>

// // Return sum of elements in A[0..N-1]
// using recursion.
// int findSum(int A[], int N, int n)
// { 
// 	if ( N>=2*n )
// 		return 0;
//     else
// 	    return (findSum(A, N + 1, n) + A[N-n]);
// }

// // Driver code
// int main()
// {
// 	int A[] = { 1, 2, 3, 4, 5 };
// 	int N = sizeof(A) / sizeof(A[0]);
//     int n = N;
// 	printf("%d", findSum(A, N, n));
// 	return 0;
// }

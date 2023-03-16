#include<iostream>
using namespace std;

/* 1.1 pattern with space
                *
              * *
            * * *
          * * * *
          
                1
              2 2
            3 3 3
          4 4 4 4

                1          
              1 2
            1 2 3
          1 2 3 4
*/


int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int i = 0, j=0;
    while(i<n){
        int k = n-1-i;
        while(k){
            cout<<"K ";
            k--;
        }
        while(j<=i){
            cout<<j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
        j=0,k=0;

    }
}
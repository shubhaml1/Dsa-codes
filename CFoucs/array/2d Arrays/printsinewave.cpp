#include<iostream>
using namespace std;

int main() {
    int arr[][5] = {{1,2,3,13,14}, {4,5,6,15,16}, {7,8,9,17,18}, {10,11,12,19,20}};
    int row = 4, col = 5;
// print element in normal array 
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
                cout<<arr[i][j] << " ";
            
    }
    cout << endl;
}

cout << endl;

//priiiinting in SSSSSiiiinnneeewave huraah !!!!!

    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            if(i%2 == 0)
                cout<<arr[j][i] << " ";
            else
                cout<<arr[row-1-j][i] << " ";
            
        }
    }

}



#include<iostream>
using namespace std;
#include<string>
char toLowerCase(char ch) {
   if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'){
      return ch;
   }
   else{
      char temp = ch - 'A' + 'a';
      return temp;
   }
   

}

// for(int i = 0 ; a[i] != '\0'; i++){
//    //    if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z' || a[i] >= '0' && a[i] <= '9')
//    //       cout<<a[i];

// }

int getLength(char a[]){
   int count = 0;
   for(int i=0; a[i]!='\0'; i++){
      count++;
   }
   return count;

}

void reverse(char a[], int n){
   int s = 0, e = n-1;
   while(s<=e){
      swap(a[s], a[e]);
      s++,e--;
   }

}

bool checkPalindrome(char a[], int n){
   int s = 0, e = n - 1;
   while(s<=e){
      if(toLowerCase(a[s]) != toLowerCase(a[e])){ return 0; }
   else { s++,e--;}
   } return 1;

}

char getMaxOccCharacter(string s){
   int a[26] = {0}, k = 0;

   for(int i = 0 ; s[i] != '\0'; i++){
         k++;
         int number = 0;
         char ch = s[i];
         number = ch - 'a';
         a[number]++;
   } 
   cout<<k<<endl;

   int max = -1, ans = 0, count  = 0;
   for(int i = 0 ; i<26 ; i++){
      count++;
      if(max<a[i]){
         ans = i;
         max = a[i];
      }
   
   }cout<<count<<endl;
    return 'a' + ans;
}

// char getMaxOccCharacter(string s) {

//     int arr[26] = {0};


//     //create an array of count of characters
//     for(int i=0; i<s.length(); i++) {
//         char ch = s[i];
//         //lowercase
//         int number = 0;
//         number = ch - 'a';
//         arr[number]++;
//     }

//     //find maximum occ character
//     int maxi = -1, ans = 0;
//     for(int i=0;i<26; i++) {
//         if(maxi < arr[i]) {
//             ans = i;
//             maxi = arr[i];
//         }
//     }
    

//     return 'a'+ans;
// }

int main(){

   char a[100];
   cout<<"enter your string "<<endl;
   cin.getline(a, 70);

   // for(int i = 0 ; a[i] != '\0'; i++){
   //    if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z' || a[i] >= '0' && a[i] <= '9')
   //       cout<<a[i];

   // }
   // cout<<endl;

   cout<<a<<endl;

   int len = getLength(a);
   // cout<<"The lenght of string is "<<len<<endl;

   // reverse(name, len);
   // cout<<"Reversed string is :";
   // cout<< name <<endl;

   // // cout<<"Character is " << toLowerCase('b')<<endl;
   // // cout<<"Character is " << toLowerCase('A')<<endl;


   cout<<" Palindrome or not :"<< checkPalindrome(a, len)<<endl;

// string s;
// cin>> s;

// cout<< getMaxOccCharacter(s) << endl;

// return 0;
}
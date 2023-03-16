#include<iostream>
using namespace std;

/* pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
 */

/* int main(){

     for(int i=1;i<=5;i++){   
          for(int j=1 ;j<=i;j++){
               cout<<i<<" ";     

          }   
          cout<<endl;
             
          }
} */


/* pattern 2
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/

/* int main(){

     for(int i=1;i<=5;i++){   
          for(int j=1;j<=i;j++){

               cout<<i+j-1<<" ";     

          }   
          cout<<endl;
             
          }
} */

/* pattern 2.1
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/

/* int main(){
     int var= 1;
     for(int i=1;i<=5;i++){   
          for(int j=1 ;j<=i;j++){
               cout<<var+j-1<<" ";   


          }   
          cout<<endl;
          var++;
             
          }
} */

/* pattern 2.2
4
3 4
2 3 4 
1 2 3 4 */

/* int main(){
     int var = 4;

     for(int i=1;i<=4;i++){   
          for(int j=1;j<=i;j++){

               cout<<var+j-1<<" ";    

          }   
          cout<<endl;
          var--;
             
          }
} */
/* pattern 2.2
D
C D
B C D 
A B C D */

/* int main(){
     int var = 68;

     for(int i=1;i<=4;i++){   
          for(int j=1;j<=i;j++){

               cout<<char(var+j-1)<<" ";    

          }   
          cout<<endl;
          var--;
             
          }
} */

/* pattern 2.3
5 4 3 2 1
6 5 4 3
7 6 5 
8 7 
9 */

/* int main(){
     int var= 1;
     for(int i=1;i<=5;i++){   
          for(int j=5 ;j>=i;j--){
               cout<<var+j-1<<" ";    


          }   
          cout<<endl;
          var++;
             
          }
} */

/* pattern 3 */

/* int main(){

     int var = 65;
     for(int i=1;i<=3;i++){   
          for(int j=1 ;j<=3;j++){
                cout<<char(var)<<" ";  
                var++; 

          }   
          cout<<endl;
             
          }
} */


/* pattern 3.1
a b c 
d e f
g h i
 */

/* int main(){

     int var = 97;
     for(int i=1;i<=3;i++){   
          for(int j=1 ;j<=3;j++){
                cout<<char(var)<<" ";  
                var++; 

          }   
          cout<<endl;
             
          }
} */ 

/* pattern with space */

/* int main()

{    int i = 1, j, n, k;
     
     cout<<"enter a number ";
     cin>>n;
     
     while(i<=n)
     {    j = 1;
          
          while(j <=n-i)
          {    cout<<" ";
               j++;
          }
          k = 1;
          while(k<=i)
          {
               cout<<"*";
               k++;
          }
          cout<<endl;
          
          i++;
     }
} */ 

/* pattern with space
 * * * *
   * * *
     * *
       *
 */

/* int main()

{    int i = 1, j, n, k;
     
     cout<<"enter a number ";
     cin>>n;
     
     while(i<=n)
     {    j = 1;
          
          while(j <= i-1)
          {    cout<<" ";
               j++;
          }
          k = n-i+1;
          while(k)
          {
               cout<<"*";
               k--;
          }
          cout<<endl;
          
          i++;
     }
} */


/* pattern with space*/

/* int main()

{    int i = 1, j, n, k;
     
     cout<<"enter a number ";
     cin>>n;
     
     while(i<=n)
     {    j = 1;
          
          while(j <= i-1)
          {    cout<<" ";
               j++;
          }
          k = n-i+1;
          while(k)
          {
               cout<<"*";
               k--;
          }
          cout<<endl;
          
          i++;
     }
} */

/* practice */
/* int main()

{    int i = 1, j, n, k;
     
     cout<<"enter a number ";
     cin>>n;
     
     while(i<=n)
     {    j = 1;
          
          while(j <= i-1)
          {    cout<<" ";
               j++;
          }
          k = n-i+1;
          while(k)
          {
               cout<<k;
               k--;
          }
          cout<<endl;
          
          i++;
     }
} */


/* pattern with space
    1
   12
  123
 1234
12345 */

/* int main()

{    int i = 1, j, n, k;
     
     cout<<"enter a number ";
     cin>>n;
     
     while(i<=n)
     {    j = 1;
          
          while(j <=n-i)
          {    cout<<" ";
               j++;
          }
          k = 1;
          int var = 1;
          while(k<=i)
          {  
               cout<<k;
               k++;
               var++;
          }
          cout<<endl;
          
          i++;
     }
} */














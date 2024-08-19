// decimal to binary 

// #include <iostream>
// #include <math.h>
// using namespace std ;
// int main(){
//     int n ,ans=0,i=0;
//     cin>> n;
//     while(n!=0){
//             int bit = n&1;
//             ans = (bit * pow(10,i))+ans;
//             n>>=1;
//             i++;
//     }
//     cout<< ans << " ";
// }



// Binary to Decimal

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n , i = 0 , ans = 0;
//     cin>> n;
//     while(n!=0){
//        int bit = n%10;
//         if(bit==1){
//             ans=ans+pow(2,i);
//         }
//         n/=10;
//         i++;
//     }
//     cout<< ans;
// }
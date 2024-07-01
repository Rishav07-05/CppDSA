// ----------- Euclid's Algorithm for GCD


// #include <iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cin>> a >> b;

//     if(a==0){
//         cout<< b;
//     }
//     if(b==0){
//         cout<< a;
//     }

//     while(a != b){
//         if(a>b){
//             a = a - b;
//         }
//         else{
//             b = b - a;
//         }
//     }
//     cout<< a;
// }



// Sieve Of Eratothenus

// class Solution {
// public:
//     int countPrimes(int n) {
//         vector<bool>prime(n+1,true);
//         prime[0] && prime[1] == false;
//         int count = 0;
//         for(int i = 2; i < n; i++){
//             if(prime[i]){
//                 count++;
//                 for(int j = 2*i; j < n; j = j + i){
//                     prime[j]=0;
//                 }
//             }

//         }
//         return count;
//     }
// };




// Modular Arithmetics ===>  
// (a + b) % m = a % m + b % m
// (a - b) % m = a % m - b % m
// (a * b) % m = a % m * b % m


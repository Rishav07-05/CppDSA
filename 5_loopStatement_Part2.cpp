// --- 1 to N

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i<=n ; i++){
//         cout<< i << " ";
//     }
// }  




// --- Sum 1 to N

// #include <iostream>
// using namespace std;
// int main(){
//     int n , sum = 0;
//     cin>> n;
//     for(int i = 1 ; i<=n; i++){
//         sum+=i;
//     }
//     cout<< sum;
// }




// ---Fibonacci Series

// # include <iostream>
// using namespace std ;
// int main(){
//     int n,sum,a=0,b=1;
//     cin>> n;
//     for(int i = 1; i<=n; i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//         cout<< sum << " ";
//     }
// }




// ---Prime Number 

// #include <iostream>
// using namespace std;
// int main(){
//     int n , count = 0;
//     cin>>n;
//     for(int i = 2; i<=n; i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     if(count<2){
//         cout<< "Prime Number" << " ";
//     }
//     else{
//         cout<< "Not Prime" << " ";
//     }
// }




// Leetcode Question 1

// #include <iostream>
// using namespace std ;
// int main (){
//     int n,a,mul=1,sum=0;
//     cin>>n;
//     while(n>0){
//         a=n%10;
//         n/=10;
//         mul*=a;
//         sum+=a;
//     }
//     int result = mul - sum;
//     cout<< result;
// }




// Leetcode Question 2

// #include <iostream>
// using namespace std;
// int main (){
    //     int n,a,sum=0;
    //     cin>>n;
    //     while(n>0){
    //         a=n%10;
    //         n/=10;
    //         if(a==1){
    //             sum+=a;
    //         }
    //     }
    //     cout<< sum;
// }
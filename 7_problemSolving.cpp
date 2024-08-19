// 1 Reverse Integer

// #include <iostream>
// # include <math.h>
// using namespace std;
// int main(){
//     int n,x;
//     cin>> n;
//     while(n>0){
//     if(x<(-(pow(2,31))) || x>(pow(2,31))-1){
//         cout<< "0";
//     }
//         x=n%10;
//         n/=10;
//     cout<< x;
//     }
// }


// 2 Compliment Base 10 Integer

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, ans, mask = 0;
//     cin >> n;
//     if(n==0){
//         cout<< 0 ;
//     }
//     while(n!=0){
//        n>>=1;
//       mask=n|1;
//       mask<<=1;
//     }
//     ans=(~n) & mask;
//     cout<< ans;
// }



// 3 Power of Two

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     for(int i=0;i<31;i++){
//     int s=(pow(2,i));
//     if(s==n){
//         cout<< "true";
//     }
//     }
//         cout<< "false";
// }
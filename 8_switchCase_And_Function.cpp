// Simple Calculator

// #include <iostream>
// using namespace std ;
// int main(){
//     int a,b;
//     char c;
//     cin>>a >> b >> c;
//     switch (c)
//     {
//     case '+':
//         cout<< a+b;
//         break;
//     case '*':
//         cout<< a*b;
//         break;
//     case '/':
//         cout<< a/b;
//         break;
//     case '%':
//         cout<< a%b;
//         break;
//     case '-':
//         cout<< a-b;
//         break;
    
//     default:
//         break;
//     }
// }




// FUNCTIONS

// #include <iostream>
// using namespace std;

// int power(){
//     int a,b;
//     cin>> a >> b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){
//     int s = power();
//     cout<< s;
// }



// Even or odd 

// bool isEven(int a){
//     if(a%2==0){
//         return true;
//     }
//     return false;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>> a;
//     if(isEven(a)){
//     cout << "Even";
//     }
//     else{
//         cout<< "Odd";
//     }
// }



// finding ncr

// int fact (int n){
//     int f = 1;
//     for(int i = 1;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }

// int permut(int n,int r){
//     int num = fact(n);
//     int deno = fact(r) * fact(n-r);
//     int ans = num/deno;
//     return ans;

// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n , r;
//     cin>>n >>r;
//     cout<< permut(n,r);
// }



// Counting Numbers

// #include <iostream>
// using namespace std;

// void count(int n){
//     for(int i = 0; i<= n; i++){
//         cout << i << " ";
//     }
//     return ;
// }


// int main(){
//     int n;
//     cin>> n;
//     count(n);

// }



// Prime Number

// #include <iostream>
// using namespace std;


// bool isPrime(int n){
//     int c = 0;
//     for(int i=2;i<=n;i++){
//         if(n%i==0){
//             c+=1;
//         }
//     }
//     if(c<2){
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// int main (){
//     int n;
//     cin>> n;
//     if(isPrime(n)){
//         cout<<"Prime";
//     }
//     else{
//         cout<< "Not Prime";
//     }

// }


// Arithmetic Progression

// #include <iostream>
// using namespace std;

// void ap(int n){
//     int a=(3*n+7);
//     cout<< a;
// }

// int main(){
//     int n;
//     cin>> n;
//     ap(n);
// }


// # include <iostream>
// # include <math.h>
// using namespace std;


// int bits2(int b){
//     int ans2 = 0 , i = 0;
//     while(b!=0){
//     int bit = b&1;
//     ans2=(bit*pow(10,i))+ans2;
//     b>>=1;
//     i++;
//     }
//     return ans2;
// }

// int bits1(int a){
//     int ans1 = 0 , i = 0;
//     while(a!=0){
//     int bit = a&1;
//     ans1=(bit*pow(10,i))+ans1;
//     a>>=1;
//     }
//     return ans1;
// }

// int countBit(int a,int b){
//     int count;
//     if(bits1(a)==1 && bits2(b)==1){
//         count+=1;
//     }
//     return count;
// }

// int main(){
//     int a , b;
//     cin >> a >> b ;
//     int w = countBit(a,b);
//     cout<< w << " ";
// }



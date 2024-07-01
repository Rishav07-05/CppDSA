// ****Recursion ==> It means that function call itself


// For solving a problem recursively we need to make a mathematical for which should be applicable for that problem without having any bug


//Finding factorial 

// #include <iostream>
// using namespace std;

// // F(n) = n * F(n-1)  
// //Left side is badi problelm and right side is choti problem

// int factorial(int n){
// //Where the program should terminate that's known as the base case.
//     if(n == 0){
//         return 1;   //Base case me return mandatory hai. 

//     }
//     // int choti = factorial(n - 1);
//     // int badi = n * choti;
//     return n * factorial(n - 1);

// }

// int main(){
//     int n;
//     cin>> n;

//     int ans = factorial(n);
//     cout<< "Factorial is : " << ans << endl;
// }

//If we remove base case we would get segmentation fault as the program doesn't know where to be terminated or the stack overflow.


// ----->  Processing means to increament something or decreament something 

// ------> Recursion when come after the processing is known as tail recursion. 
// Followed by the path : 
// Base Case ==>  Processing ==> Recursive Relation


// -------> Recursion which come before the processing is known as head recursion. Followed by the path : 
// Base Case ==> Recursive Relation  ==> Processing



// finding power of 2

// #include <iostream>
// using namespace std;


// int power(int n){
//     if(n == 0)
//         return 1; //base case 
 
// //recursive call
//     return 2 * power(n - 1);
// }

// int main(){
//     int n;
//     cin>> n;
//     int ans = power(n);
//     cout<<"The power is: " << ans <<endl;
// }



// print counting 

// #include <iostream>
// using namespace std;

// void count(int n){
//     if(n == 0){
//         return ;
//     }
//         count(n - 1);  
//         cout<< n << " ";
// }

// int main(){
//     int n;
//     cin>> n;
//     count(n);
// }
// Macros  ===> A piece of code in a program that is replaced by the value of macro 


// #include <iostream>
// using namespace std;
// #define pi 3.14
// int main(){
//     int area;
//     int r = 5;
//     int l = 6;
//     area = pi * r * r;
//     cout<< "The area is : "<<area;
// }




// Global Variables ==> Sharing of variables 

// Drawback ===> any function could replace it and make the output with some error 

// #include <iostream>
// using namespace std;

// void a(int &i){
//     cout<< i;
// }
// void b(int &i){
//     cout<< i;

// }

// int main(){
//     int i = 5;
//     a(i) ;
//     cout<< endl; 
//     b(i); 
// }



// Inline Function 
//Pros ==> No extra memory usage and no function call over head

// #include <iostream>
// using namespace std;

// inline int getMax(int a, int b){
//     if(a > b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int main(){
//     int a;
//     int b;
//     cin>> a >> b;
//     int ans =  getMax(a,b);
//     cout<< "The answer is : " << ans;
// }




//Default Arguments ==> either acceptable by itself or works on the user inputs

//Used for functions 


// Question ==> Jaggered array with the help of dynamic array 
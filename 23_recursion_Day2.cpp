// #include <iostream>
// using namespace std;

// void home(int src , int dest){

//     cout<< "Source = " << src << " Destination = " <<dest << endl;
//         if(src == dest){
//             cout<< "Home :)" << endl;
//             return;
//         }
//         src++;
//         home(src,dest);

// }

// int main(){
//     int dest = 10;
//     int src = 1;
//     home(src , dest);

// } 


// Fibonnaci number 

// #include <iostream>
// using namespace std;

// int fibb(int n){

//     if(n == 0){
//         return n;
//     }
//     if(n == 1){
//         return n;
//     }  
    
    
// }

// int main(){
//     int n;
//     cin>> n;
//     int ans = fibb((n-1) + (n-2));
//     cout<< ans;
// }




// say digit 


// #include <iostream>
// using namespace std;

// void digit(int n , string arr[]){


//     if(n == 0){
//         return;
//     }    

//     int digit1 = n % 10;
//     n = n / 10;

//     digit(n , arr);
//     cout<< arr[digit1] <<" ";

// }

// int main(){
//     int n ;
//     string arr[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
//     cin>> n;
//     digit(n , arr);
// }


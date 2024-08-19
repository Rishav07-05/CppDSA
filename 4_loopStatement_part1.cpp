// --- print 1 to N

// # include <iostream>
// using namespace std;
// int main(){
//     int a , i=1;
//     cin >> a;
//     while (i<=a){
//         cout << i << endl;
//         i++;
//     }
// }



// --- sum 1 to N

// # include <iostream>
// using namespace std ;
// int main(){
//     int n , i=1 , sum=0;
//     cin >> n;
//     while(n>=i){
//         sum+=i;
//         i++;
//     }
//     cout<< "Sum is : " << sum << endl;
// }



// --- Prime Number

// #include <iostream>
// using namespace std;
// int main(){
//     int a,count=0;
//     cin>> a;
//     int i=2;
//     while(a>=i){
//         if(a%i==0){
//             count+=1;
//         }
//         i++;
//     }
//     if(count < 2){
//         cout<< "Prime";
//     }
//     else {
//         cout << "Not Prime";
//     }
// }



// ---sum of even numbers

// # include <iostream>
// using namespace std;
// int main(){
//    int n , i=1 , sum=0;
//    cin>>n;
//    while(n>=i){
//     if(i%2==0){
//         sum+=i;
//     }
//     i++;
//    } 
//    cout<< "Sum  of all even number : " <<sum << endl;
// }



// ---Table of N

// # include <iostream>
// using namespace std;
// int main(){
//     int n , i = 1 , s;
//     cin>> n;
//     cout<< "The table of " << n << " is :" <<endl;
//     while (10>=i){
//         s=i*n;
//         cout<< s <<endl;
//         i++;
//     }

// }



// pattern 1 
// ****
// ****
// ****
// ****

// # include <iostream>
// using namespace std;
// int main(){
//     int n , mul=1;
//     cin >> n;
//     int i = 1;
//     while(n>=i){
//         int j = 1;
//         while(n>=j){
//             cout<< "*";
//             j++;
//         }
//         cout<< "\n";
//         i++;
//     }
// }



// pattern 2
// 1 1 1
// 2 2 2
// 3 3 3

// # include <iostream>
// using namespace std;
// int main (){
//     int n , i=1;
//     cin>> n;
//     while(n>=i){
//         int j=1;
//         while(n>=j){
//             cout<< i;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }
// }



// Pattern 3
// 1234
// 1234
// 1234
// 1234

// # include <iostream>
// using namespace std ;
// int main(){
//     int n , i = 1;
//     cin>> n;
//     while (n>=i){
//         int j = 1;
//         while(n>=j){
//             cout<< j;
//             j++;
//         }
//         cout<< endl;   
//         i++;
//     }
// }



// Pattern 4
// 123
// 456
// 789

// #include <iostream>
// using namespace std;
// int main(){
//     int n , i = 1;
//     cin>> n;
//     int s = 1;
//     while(n>=i){
//         int j = 1;
//         while(n>=j){
//             cout<< s;
//             s++;
//             j++;
//         }   
//         cout << endl;
//         i++;
//     }

// }




//Pattern 5
// *
// **
// ***
// ****

// #include <iostream>
// using namespace std;
// int main (){
//     int n , i=1;
//     cin>> n;
//     while(n>=i){
//         int j=1;
//         while(i>=j){
//             cout<< "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }



//Pattern 6
// 1
// 12
// 123
// 1234

// #include <iostream>
// using namespace std;
// int main (){
//     int n , i=1;
//     cin>> n;
//     while(n>=i){
//         int j=1;
//         while(i>=j){
//             cout<< j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }



//Pattern 7
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include <iostream>
// using namespace std;
// int main(){
//     int n , i=1  , c=1;
//     cin>> n;
//     while(n>=i){
//         int j = 1;
//         while(i>=j){
//             cout<< c << " ";
//             c++;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }
// }




// Pattern 8
// 1
// 2 3
// 3 4 5
// 4 5 6 7

// # include <iostream>
// using namespace std;
// int main(){
//     int n , i=1 , c=1;
//     cin>> n;
//     while(n>=i){
//         int j = 1;
//         while(i>=j){
//             cout<< c << " ";
//             c++;
//             j++;
//         }
//         cout<< "\n";
//         i++;
//         c=i;
//     }
// }



// Pattern 9
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// # include <iostream>
// using namespace std;
// int main(){
//     int n , i = 1;
//     cin>> n;
    
//     while(n>=i){
//         int j = 1;
//         int c = i;
//         while(i>=j){
//             cout<< c << " ";
//             c--;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }
// }



// Pattern 10
// A A A
// B B B
// C C C

// #include <iostream>
// using namespace std;
// int main (){
//     int n , i = 1;
//     char ch = 'A';

//     cin>> n;
//     while(n>=i){
//         int j = 1;
//         while(n>=j){
//             cout<< ch << " ";
//             j++;
//         }
//         cout<< endl;
//         ch++;
//         i++;
//     }
// }



// Pattern 11
// A B C
// A B C
// A B C

// # include <iostream>
// using namespace std;
// int main(){
//     int n , i = 1;
//     cin>> n;
//     while(n >= i){
//         int j = 1;
//         char ch = 'A';

//         while(n>=j){
//         cout << ch << " " ;
//             j++;
//             ch++;
//         }
//         cout<< "\n";
//         i++;
//     }
// }



// Pattern 12
// A B C
// D E F
// G H I

// # include <iostream>
// using namespace std;
// int main(){
//     int n , i = 1;
//     char ch = 'A';
//     cin>> n;
//     while(n>=i){
//         int j = 1;
//         while(n>=j){
//             cout<< ch << " ";
//             ch++;
//             j++;
//         }
//         cout<< "\n";
//         i++;
//     }
// }



// Pattern 13
// A
// B B 
// C C C 

// # include <iostream>
// using namespace std;
// int main (){
//     int n , i=1;
//     char ch = 'A';
//     cin>> n;
//     while(n>=i){
//         int j = 1;
//         while(i>=j){
//             cout<< ch;
//             j++;
//         }
//         ch++;
//         cout<< endl;
//         i++;
//     }
// } 




// Pattern 14
// A
// B C 
// D E F 
// G H I J

// # include <iostream>
// using namespace std;
// int main(){
//     int n , i = 1;
//     char ch = 'A';
//     cin >> n;
//     while (n>=i){
//         int j = 1;
//         while(i>=j){
//             cout<< ch;
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }




// Pattern 15
// A B C 
// B C D 
// C D E 

// #include <iostream>
// using namespace std;
// int main(){
//     int n , i = 1;
//     cin>> n;
//     char ch =   'A';
//     while(n>=i){
//         int j =  1;
//         while (n>=j){
//             cout << ch << " ";
//             ch++;
//             j++;
//         }
//         cout<< "\n";
//         i++;
//     }
// }
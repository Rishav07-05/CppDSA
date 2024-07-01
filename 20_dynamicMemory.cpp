// #include <iostream>
// using namespace std;
// int main(){
//     int i = 5;
//     int &j = i;  //--- creating a reference variable

//     cout<< i << endl;
//     cout<< ++i <<endl;
//     cout<< ++j << endl;
//     cout<< j << endl;
//     cout<< i;
// }



// Bad practice to an input in array 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int a[n]; // --- Bad practice as it as for the size at the time of runtime but should ask at the time of compile time ..... In this case the stack doesn't define itself the size and the program gets crashed 

// the memory allocated in stack is known as Static Memory Allocation
// the memory allocated in heap is known as Dynamic Memory Allocation

// }



// Dynamically taking input of array so that array may not crash 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     new int[n];
//     int *arr = new int[n];
    
//     for(int i = 0; i < n; i++){
//         cin>> arr[i];
//     }
//     int sum = 0;

//     for(int i = 0; i < n; i++){
//         sum += arr[i];
//     }
//         cout<< sum;
    

// }



// dynamic memory allocation in 2D Array


// Input for a square 2D matrix 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     int** arr = new int*[n];
//     for(int i = 0; i < n; i++){
//         arr[i] = new int[n];
//     }


//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin>>arr[i][j];
//         }
//     }


//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout<< arr[i][j];
//         }
//         cout<< endl;
//     }

// }



// Input for a 2D matrix with different rows and cols

// #include <iostream>
// using namespace std;
// int main(){
//     int rows;
//     cin>> rows;
//     int cols;
//     cin>>cols;

//     int **arr = new int*[rows];
//     for(int i = 0; i < rows; i++){
//             arr[i] = new int [cols];
//     }
//     for(int i = 0; i < rows; i++){
//             arr[i] = new int [cols];
//     }


//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cin>> arr[i][j];
//         }
//     }


//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cout<<  arr[i][j]  <<" ";
//         }
//         cout<< endl;
//     }

//     // releasing memory 

//     for(int i = 0; i < rows; i++){
//             delete []arr[i];
//     }
    
//     delete []arr;
// }

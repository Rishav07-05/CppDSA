// ------  Initializing the 2D - array 

// #include <iostream>
// using namespace std;
// int main(){
//     int n , m;
//     cin>> n >> m;
//     int a[m][n];
//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             cin>> a[i][j];
//         }
//     }

//     cout<< endl;

//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             cout<< a[i][j] <<" ";
//         }
//         cout<< endl;
//     }

// }




// --------  Linear Search in 2D Array 

// #include <iostream>
// using namespace std;
// int main(){
//     int n , m;
//     cin>> n >> m;
//     int a[m][n];
//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             cin>> a[i][j];
//         }
//     }

//     int key;
//     cin>> key;

//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             if(a[i][j] == key){
//                 cout<< "Key Found at idx.. " << a[i][j] - 1 ;
//             }
//         }
//     }
//     return 0;
// }



// -------  Sum of all elements in a row in 2D array 

// #include <iostream>
// using namespace std;
// int main(){
//     int n , m;
//     cin>> n >> m;
//     int a[m][n];
//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             cin>> a[i][j];
//         }
//     }


//     for(int i = 0; i < m; i++){
//         int sum = 0;
//         for(int j = 0; j < n; j++){
//             sum+=a[i][j];
//         }
//         cout<<  sum <<" ";
//     }
// } 





// -------  Sum of all elements in a col in 2D array 

// #include <iostream>
// using namespace std;
// int main(){
//     int n , m;
//     cin>> n >> m;
//     int a[m][n];
//     for(int j = 0; j < m; j++){
//         for(int i = 0; i < n; i++){
//             cin>> a[i][j];
//         }
//     }


//     for(int i = 0; i < m; i++){
//         int sum = 0;
//         for(int j = 0; j < n; j++){
//             sum+=a[i][j];
//         }
//         cout<<  sum <<" ";
//     }
// } 



// --------  Largest Row Sum 

// #include <iostream>
// using namespace std;
// int main(){
//     int max = INT8_MIN;
//     int idx = 0;
//     int n , m;
//     cin>> n >> m;
//     int temp[m];
//     int a[m][n];
//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             cin>> a[i][j];
//         }
//     }


//     for(int i = 0; i < m; i++){
//         int sum = 0;
//         for(int j = 0; j < n; j++){
//             sum+=a[i][j];
//         }
//         if(sum > max){
//             max = sum;
//             idx = i;
//         }
//     }
//     cout<< "The max is " << max << " at index " << idx;
// }





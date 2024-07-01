// Finding sorted array 

// #include <iostream>
// using namespace std;

// bool sorted(int arr[] , int n){
//     if(n == 0 || n == 1) return true;

//     if(arr[0] > arr[1]){
//         return false;
//     }
//     else{
//         bool remaining = sorted(arr + 1 , n - 1);
//         return remaining;
//     }
// }

// int main(){
//     int n;
//     cin>> n;
//     new int[n];
//     int *arr = new int[n];
//     for(int i = 0; i < n; i++){
//         cin>> arr[i];
//     }
//     bool ans = sorted(arr ,n);

//     if(ans){
//         cout<< "Array is sorted";
//     }
//     else{
//         cout<< "Array not sorted";
//     }
// }




// sum of array 

// #include <iostream>
// using namespace std;

// int sum(int arr[] , int n){
//     if(n == 1) return arr[n - 1];
//     return arr[n - 1] + sum(arr, n-1);
// }

// int main(){
//     int n;
//     cin>> n;
//     int *arr = new int;
//     for(int i = 0; i < n; i++){
//         cin>> arr[i];
//     }

//     int ans = sum(arr,n);
//     cout<< ans;
// }




// Linear Search

// #include <iostream>
// using namespace std;

// bool search(int arr[] , int n , int key){

//     if(n == 0 ){
//         return false;
//     }



//     if(arr[0] == key){
//         return true;
//     }
//     else{
//     bool s = search(arr+ 1,n - 1,key);
//     return s ;
//     }
// }

// int main(){
//     int n;
//     cin>> n;
//     int *arr = new int;
//     for (int i  = 0; i < n; i++)
//     {
//         cin>> arr[i];
//     }
//     int key;
//     cin>> key;
//     bool ans = search(arr , n , key);

//     if(ans){
//         cout<< "Key found";
//     }
//     else{
//         cout<< "Not found";
//     }
// }



// Binary Search

// #include <iostream>
// using namespace std;

// bool searchBinary(int arr[] ,int s , int e , int key , int n){
    
//         int mid = s + (e - s)/2;

//         if(s > e){
//             return false;
//         }

//         if(key > arr[mid]){
//             searchBinary(arr, mid + 1 , e , n ,key);
//         }
//         else{
//             searchBinary(arr, s , mid - 1 , n ,key);
//         }
// }


// int main(){
//     int n;
//     cin>> n;
//     int *arr = new int[n];
//     for(int i = 0; i < n; i++){
//         cin>> arr[i];
//     }
//     int key;
//     cin>> key;

//     int s ;
//     int e ;

//     bool ans = searchBinary(arr , s , e , key , n);


//     if(ans){
//         cout<< "Found";
//     }
//     else {
//         cout<< "Not found";
//     }
// }




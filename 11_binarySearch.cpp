// #include <iostream>

// using namespace std;

// int binary(int a[],int n,int key){
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end - start)/2;

//     while(start <= end){

//         if(a[mid]==key){
//             return a[mid];
//         }

//         if(key > a[mid]){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
//     }
    
//     return -1;
// }


// int main (){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i =0;i<n;i++){
//         cin>> a[i];
//     }
//     int key;
//     cin>> key;
//     int ans = binary(a,n,key);
//     cout<< ans;
// }





// First & Last element of an array


// int firstOccurence(int a[],int n,int key){
//     int store = 0;
//     int start = 0;
//     int end = n-1;
//     int mid = start + ((end - start)/2);
//     while(start<=end){
//         if(a[mid] == key){
//             store = mid;
//             end = mid - 1;
//         }
//         else if(key > a[mid]){
//         start = mid + 1;
//         }
//         else{
//         end = mid - 1;
//         }
//         mid = start + ((end - start)/2);
//     }
//     return store;
// }

// int lastOccurence(int a[],int n,int key){
//     int store = 0;
//     int start = 0;
//     int end = n-1;
//     int mid = start + ((end - start)/2);
//     while(start<=end){
//         if(a[mid] == key){
//             store = mid;
//             start = mid + 1;
//         }
//         else if(key > a[mid]){
//         start = mid + 1;
//         }
//         else{
//         end = mid - 1;
//         }
//         mid = start + ((end - start)/2);
//     }
//     return store;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i =0;i<n;i++){
//         cin>> a[i];
//     }
//     int key;
//     cin>> key;
//     int ans = firstOccurence(a,n,key);
//     int ans1 = lastOccurence(a,n,key);
//     cout<<"first occurence at index : " << ans << endl;
//     cout<<"Last occurence at index : " << ans1;
// }



// Find total no. of occurence 

// int firstOccurence(int a[],int n,int key){
//     int store = 0;
//     int start = 0;
//     int end = n-1;
//     int mid = start + ((end - start)/2);
//     while(start<=end){
//         if(a[mid] == key){
//             store = mid;
//             end = mid - 1;
//         }
//         else if(key > a[mid]){
//         start = mid + 1;
//         }
//         else{
//         end = mid - 1;
//         }
//         mid = start + ((end - start)/2);
//     }
//     return store;
// }

// int lastOccurence(int a[],int n,int key){
//     int store = 0;
//     int start = 0;
//     int end = n-1;
//     int mid = start + ((end - start)/2);
//     while(start<=end){
//         if(a[mid] == key){
//             store = mid;
//             start = mid + 1;
//         }
//         else if(key > a[mid]){
//         start = mid + 1;
//         }
//         else{
//         end = mid - 1;
//         }
//         mid = start + ((end - start)/2);
//     }
//     return store;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i =0;i<n;i++){
//         cin>> a[i];
//     }
//     int key;
//     cin>> key;
//     int ans = firstOccurence(a,n,key);
//     int ans1 = lastOccurence(a,n,key);
//     int total = (ans1 - ans) + 1;
//     cout<<"Total occurence are : " << total << endl;
// }



// peak index of a mountain array


// int peak (int a[], int n){
//     int start = 0;
//     int end = n - 1; 
//     int mid = start + ((end - start)/2);
//     while(start < end){
//         if(a[mid] < a[mid + 1]){
//             start = mid + 1;
//         }
//         else{
//             end = mid ;
//         }
//     mid = start + ((end - start)/2);
//     }
//     return start;
// }


// #include <iostream>
// using namespace std ;
// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i =0;i<n;i++){
//         cin>> a[i];
//     }
//     int ans = peak(a,n);
//     cout << "Peak is here :) " << ans;
// }



// pivot index of an array 

// #include <iostream>
// using namespace std;

// int pivotelement(int a[],int n){
//     int start = 0;
//         int end = n - 1;
//         int mid = start + ((end - start)/2);
//         while(start<end){
//             if(a[mid] >= a[0]){
//                 start =  mid + 1;
//             }
//             else{
//                 end = mid;
//             }
//         mid = start + ((end - start)/2);
//         }
//         return start;
//     }


// int main (){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i =0;i<n;i++){
//         cin>> a[i];
//     }
//     int ans = pivotelement(a,n);
//     cout<< ans;
// }



// Search in a rotated sorted array 

// #include <iostream>
// using namespace std;

// int pivot(int a[],int n,int target){
//         int s = 0;
//         int e = n- 1;
//         int mid = s + ((e-s)/2);
//         while(s<=e){
//             if(a[mid] <= a[0]){
//                 s = mid + 1;
//             }
//             else{
//                 e = mid;
//             }
//             mid = s + ((e-s)/2);
//         }
// }

// int binarySearch(int a[],int n,int target){
//     int s = 0;
//         int e = n - 1;
//         int mid = s + ((e-s)/2);
//         while(s<=e){
//             if(a[mid] == target){
//                 return mid;
//             }
//             if(a[mid] > target ){
//                 e = mid - 1;
//             }
//             else{
//                 s = mid + 1;
//             }
//             mid = s + ((e-s)/2);
//         }
// }

// int position(int a[],int n, int target){
//     int ans = pivot(a,n,target);
//     if(target >= a[ans] && target <= a[n-1]){
//         return binarySearch(a,n,target);
//     }
//     else{
//         return binarySearch(a,n,target);
//     }
// }


// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i = 0; i < n ; i++){
//         cin>> a[i];
//     }
//     int target;
//     cin>> target;
//     int ans = position(a,n,target);
//     cout<< ans;
// }
// Minimum and Maximum element in an array

// Function Approach

// #include <iostream>
// using namespace std;

// int min1(int a[] , int n){
//     int mino = INT8_MAX;
//     int i;
//     for(i = 0; i<n;i++){
//         mino=min(mino,a[i])
//     }
//     return mino;
// }

// int max1(int a[] , int n){
//     int maxo = INT8_MIN;
//     int i;
//     for(i = 0; i<n;i++){
//         maxo=max(maxo,a[i]);
//     }
//     return maxo;
// }

// int main(){
//     int size,store;
//     cin>> size;
//     int a[size];
//     for(int i=0;i<size;i++){
//         cin>> a[i];
//         }
//         int ans =max1(a,size);
//         cout << "Maximum is : " <<ans <<endl;
//         int ans1 =min1(a,size);
//         cout << "Minimum is : " << ans1;
//     }

// 2nd Approach

// #include <iostream>
// using namespace std;
// int main(){
//     int n,maximum,minimum;
//     cin>> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>> a[i];
//         maximum=max(maximum,a[i]);
//         minimum=min(minimum,a[i]);
//     }
//     cout<< "The maximum number is : " << maximum << endl;
//     cout<< "The minimum number is : " << minimum;
// }

// Sum of all array elements

// 1st Approach

// #include <iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cin>> n;
//     int a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//         sum+=a[i];
//     }
//     cout<< sum << endl;
// }

// Fuction Approach

// #include <iostream>
// using namespace std;

// int sumArray(int a[],int size){
//     int sum = 0;
//     for(int i=0;i<size;i++){
//         sum+=a[i];
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>> a[i];
//         }
//         int ans = sumArray(a,n);
//         cout<< ans << endl;

// }

// Linear Search

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>> a[i];
//     }
//     int key;
//     cin>> key;
//     for(int i=0;i<n;i++){
//         if(key==a[i]){
//             cout<<"The position of key is : " << i;
//         }
//     }
// }

// Reverse array

// #include <iostream>
// using namespace std;
// void reverse(int a[], int size){
//     int start = 0 ;
//     int end = size-1;
//     while (start<=end){
//          swap(a[start],a[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int a[] , int n){
//     for(int i = 0 ; i < n ; i++){
//         cout<< a[i] <<" ";
//     }
// }
 
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n], store;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     reverse(a,n);
//     printArray(a,n);
// }



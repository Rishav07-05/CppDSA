//   ------ Selection Sort ------

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     int a[n],minIndex,i,j;

//     for(int i = 0; i < n ; i++){
//         cin>> a[i];
//     }
//     for(i = 0;i < n;i++){
//        minIndex = i;
//             for(j = i+1; j < n; j++){
//                 if(a[j]<a[minIndex])
//                     minIndex = j;
//             }
//             swap(a[minIndex],a[i]);
//             cout<< a[i] << " ";
//     }
// }

//   ----- Bubble Sort -----

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i =0;i<n;i++){
//         cin>> a[i];
//     }

//     for(int i = 1;i<n;i++){
//         for(int j = 0;j<n-i;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//             }
//         }
//     }

//     for(int i = 0;i<n;i++){
//         cout<< a[i] <<" ";
//     }
// }



//   ------ Insertion Sort ------

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i = 0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i = 1;i<n;i++){
//         int temp = a[i];
//         int j;
//         for(j = i-1;j>=0;j--){
//         if(a[j]>temp){
//             a[j+1] = a[j];
//         }
//         else{
//             break;
//         }

//  }
//         a[j+1] = temp;
//     }
//     for(int i = 0;i<n;i++){
//         cout<< a[i] <<" ";
//     }
// }
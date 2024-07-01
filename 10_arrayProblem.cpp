// ----- Swap alternate 

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0;i<n;i++){
//         cin >> a[i]; 
//     }
//     for(int i = 0;i<n;i+=2){
//         if(i+1<n){
//         swap(a[i],a[i+1]);
//         }
//     }
        
//     for(int i = 0;i<n;i++){
//         cout<< a[i] << " ";
//     }
// }



// linear search approach

// #include <iostream>
// using namespace std;

// void linear(int a[] , int n , int c){
//     int count = 0;
//     for(int i = 0 ; i<n ; i++){
//         if (a[i] == c){
//             cout<< a[i];
//         }
//     }
// }


// int main(){
//     int n ;
//     cin>> n;
//     int a[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>> a[i];
//     }
//     int c;
//     cin>> c;
//     linear(a,n,c);
// }


// ===>> using xor approach

#include <iostream>
using namespace std;
int main(){
     int n ;
    cin>> n;
    int a[n];
    for(int i = 0 ; i<n ; i++){
        cin>> a[i];
    }
    int c;
    cin>> c;
    int ans = 0;
    for(int i = 0 ; i<n ; i++){
        ans = ans^a[i];
    }
    cout<< ans - 1;

}



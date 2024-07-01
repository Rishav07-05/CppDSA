// Reverse string 

// #include <iostream>
// using namespace std;

// void reverse(string &n , int s , int e){
    
    
//     if(s > e){
//         return;
//     }

//     swap(n[s++],n[e--]);
//     reverse(n,s,e);
// }

// int main(){
//     string n;
//     cin>> n;
//     int s = 0;
//     int e = n.length() - 1;
//     reverse(n,s,e);
//     cout<< n;
// }




// Check palindrome 

// #include <iostream>
// using namespace std;

// bool check(string n , int s, int e){
//    string temp = n;

//    if(s > e) return true;

//    if(n[s] != n[e]){
//     return false;
//    }
//    else{
//     return check(n,s+1,e-1);
//    }
// }


// int main(){
//     string n;
//     cin>> n;
//     bool ans = check(n,0,n.length()-1);
//     if(ans){
//         cout<< "palindrome";
//     }
//     else{
//         cout<< "Not Palindrome";
//     }
// }


// Exponent 

// #include <iostream>
// using namespace std;

// int power(int a, int b){
//     if(b == 0){
//         return 1;
//     }
//     if(b == 1){
//         return a;
//     }

//     int ans = power(a , b/2);
//     if(b%2==0){
//         return ans*ans;
//     }
//     else{
//         return a * ans * ans;
//     }
// }

// int main(){
//     int a,b;
//     cin>> a >> b;
//     int ans = power(a,b);
//     cout<< ans;
// }



// bubble sort 

// #include <iostream>
// using namespace std;

// void bubble(int arr[] , int n , int i, int j){

//     if(n == 0 || n == 1) return;

//     if(arr[i] > arr[j]){
//         swap(arr[i+1],arr[j+1]);
//         bubble(arr,n-1,i,j);
//     }

//     cout<<arr[n] << " ";
// }

// int main(){
//     int n;
//     cin>> n;
//     int *arr = new int[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     int i = 0;
//     int j = i+1;
//     bubble(arr,n,i,j);
    
// }



// ---Wrong Approach 
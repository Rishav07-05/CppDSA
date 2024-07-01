// Reversing an array

// #include <iostream>
// using namespace std;

// void reverse(int a[],int n){
//     int s = 0;
//     int e = n-1;
//     while(s<=e){
//         swap(a[s],a[e]);
//         s++;
//         e--;
//     }
//     for(int i = 0;i<n;i++){
//         cout<<a[i] <<" ";
//     }
// }

// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i = 0;i<n;i++){
//         cin>> a[i];
//     }
//     reverse(a,n);
// }





// Merge Sorted Array

// #include <iostream>
// using  namespace std;

// void merge(int a[],int n,int b[],int m,int c[],int s){
//     int i = 0 , j = 0;
//     int k = 0;
//     while(i <= j){
//         if(a[i]<b[j])
//         {
//             c[k++] = a[i++];
//         }
//         else
//         {
//             c[k++] = a[j++];
//         }
//     }

//     while(i<n)
//     {
//         c[k++] = a[i++];
//     }
//     while(j<m)
//     {
//         c[k++] = b[j++];
//     }
// }

// void print(int ans[] , int n){
//     for(int i = 0; i < n; i++){
//         cout<< ans[i] << " ";
//     }
//     cout<< endl;
// }

// int main(){

//     int n;
//     cin>> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>> a[i];
//     }
//     int m;
//     cin>> m;
//     int b[m];
//     for(int j=0;j<m;j++){
//         cin>> b[j];
//     }
//     int s = m+n;
//     int c[s];
//     merge(a,n,b,m,c,s);
//     print(c,s);
//     return 0;
// }





// Move Zeroe

// #include <bits/stdc++.h>
// using namespace std;

// void zeroes(int a[], int n){
//     int j = 0;
//     for(int i = 0;i<n;i++){
//         if(a[i] != 0){
//             swap(a[i],a[j]);
//             j++;
//         }
//     }
//     for(int i =  0;i<n;i++){
//         cout<< a[i] << " ";
//     }
// }

// int main(){
//    int n;
//    cin>> n;
//    int a[n];
//    for(int i = 0;i < n; i++){
//     cin>>a[i];
//    }
//    zeroes(a,n);
// }




// Sum of two arrays

// #include <iostream>
// using namespace std;

// void sum(int a[], int n, int b[], int m)
// {
//     int s , carry = 0;
//     int i , j; 
//     for (i = n; i > 0; i--)
//     {
//         for (j = m; j > 0; j--)
//         {
//             s = a[i] + b[j] + carry;
//             s = s%10;
//             carry = s/10;
//             cout<< s;
//         }
//     }
    
//     while(i >= 0){
//             s = a[i] + carry;
//             s = s%10;
//             carry = s/10;
//             i--;
//             cout<< s;
//     }
//     while(j >= 0){
//             s = b[j] + carry;
//             s = s%10;
//             carry = s/10;
//             j--;
//             cout<< s;
//     }
//     while(carry != 0){
//             s = carry;
//             s = s%10;
//             carry = s/10;
//             cout<< s;
//     }     
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int m;
//     cin >> m;
//     int b[m];
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     sum(a,n,b,m);
// }
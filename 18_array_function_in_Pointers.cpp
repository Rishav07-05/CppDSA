// Array 

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10] = {23 , 122 , 41 , 67};
//     cout<< "Address of array " << arr << endl;
//     cout<< "Address of array " << &arr[0] << endl;
//     cout<< *arr << endl;  
//     cout<< *arr + 1 << endl;  
//     cout<< *(arr + 1) << endl; 
//     cout<< arr[2] << endl; 
//     cout<< *(arr + 2) << endl; 
//     // i[arr] = *(i + arr);
//     // arr[i] = *(arr + i);
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10];

// // error !!!!
//     // arr= arr + 1;

// int *ptr = &arr[0];
// cout<< ptr <<endl;
// ptr = ptr + 1;
// cout<< ptr <<endl;

// }


// character array 


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10] = {1,2,5,9};
//     char ch[7] = "Rishav";

//     cout<< arr << endl;
//     cout<< ch << endl;

//     char *ptr = &ch[0];
//     cout<< ptr << endl;


//     char temp = 'R';
//     char *p = &temp;
//     cout<< p <<endl;

// }





// pointers function 


// #include <iostream>
// using namespace std;

// void print(int *p){
//     cout<< p << endl;
//     cout<< *p << endl;
// }


// void update(int *p){
//     // p = p + 5;
//     // cout<< "Inside : " << p <<endl;
//     *p +=1;
// }


// int main(){
//     int value = 5;
//     int *p = &value;
//     // print(p);
//     cout<< "before address: " << p <<endl;
//     cout<< "before Value: " << *p <<endl;
//     update(p);
//     cout<< "after address: " << p <<endl;
//     cout<< "after value: " << *p <<endl;

// }


// #include <iostream>
// using namespace std;

// int getSum(int *arr,int n){

//     cout<< sizeof(arr) << endl;
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum+=arr[i];
//     }
//     return sum;
// }

// int main(){
//     int arr[5] = {1 , 2 , 3 , 4, 5};
//     cout<< "Sum is : " << getSum(arr + 2, 3);
// }


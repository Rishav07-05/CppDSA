// #include <iostream>
// using namespace std;
// int main(){
//     char name[20];
//     cout<< "Enter Your Name : ";
//     cin>> name;

//     cout<< "My name is " << name;
// }


// counting length of a character

// #include <iostream>
// using namespace std;
// int main(){
//     char name[20];
//     int count = 0;
//     cin>> name;
//     for(int i = 0;name[i]!= '\0';i++){
//         count++;
//     }
//     cout<< count;
// }



// Reversing an string 

// #include <iostream>
// using namespace std;
// int main(){
//     char reverse[20];
//     cin>> reverse;
//     int count = 0;
//     for(int i = 0;reverse[i]!= '\0';i++){
//         count++;
//     }
//     int s = 0;
//     int e = count-1;
//     while(s<e){
//         swap(reverse[s++],reverse[e--]);
//     }
//     cout<<"The reversal array is : " << reverse << endl;
//     cout<<"The length of array is : " << count;
// }



// Check palindrome for a string 

// #include <iostream>
// using namespace std;

// bool checkpalindrome(char a[],int count){
//     int s = 0;
//     int e = count - 1;
//     while(s <= e){
//         if(a[s] != a[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//             return 1;
// }

// int main(){
//     char a[20];
//     cin>>a;
//     int count = 0;
//     for(int i = 0;a[i]!= '\0';i++){
//         count++;
//     }
//     cout<< checkpalindrome(a,count);
// }




// Maximum Occuring character in a string 


// #include <iostream>
// using namespace std;

// char maxOccurence(string s){
//     int arr[26] = {0};
//     for(int i = 0; i < s.length(); i++){
//         char ch = s[i];
//         int n = 0;
//         if(ch >= 'a' && ch <= 'z'){
//             n = ch - 'a';
//         }
//         else{
//             n = ch - 'A';
//         }
//         arr[n]++;
//     }
//     int max = 0 , ans = 0;
//     for(int i = 0;i<26;i++){
//         if(max < arr[i]){
//             ans = i;
//             max = arr[i];
//         }
//     }
//     char final = 'a' + ans;
//     return final;
// }

// int main(){
//     string s;
//     cin>> s;
//     cout<< maxOccurence(s) << endl;
// }





// Merge Sort using recursion

#include <iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int mid = s + (e - s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1]; 
    int *second = new int[len2]; 


// copy element 1
    int mainArrayIdx = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIdx++];
    }
// copy element 2
    mainArrayIdx = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIdx++];
    }
// now merging both of them 

int idx1 = 0;
int idx2 = 0;
mainArrayIdx = s;

while(idx1 < len1 && idx2 < len2){
    if(first[idx1] < second[idx2]){
        arr[mainArrayIdx++] = first[idx1++];
    }
    else{
        arr[mainArrayIdx++] = second[idx2++];
    }
}

while(idx1 < len1){
    arr[mainArrayIdx++] = first[idx1++];
}
while(idx2 < len2){
    arr[mainArrayIdx++] = second[idx2++];
}

delete[]first;
delete[]second;

}

void mergeSort(int arr[],int s,int e){
    int mid = s + (e - s)/2;
// base case 
    if(s >= e){
        return;
    }
// for left part 
mergeSort(arr,s,mid);

// for right part 
mergeSort(arr,mid+1,e);

// merge both array 

merge(arr,s,e);

}

int main(){
    int n;
    cin>> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    mergeSort(arr , 0 , n - 1);


    for(int i = 0; i < n; i++){
        cout<< arr[i] <<" ";
    }
}
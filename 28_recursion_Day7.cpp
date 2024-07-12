#include <iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int mid = s + (e - s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *right = new int[len1];
    int *left = new int[len2];

    // copying right element 
    int mainArrayIdx = s;
    for(int i = 0; i < len1; i++){
        right[i] = arr[mainArrayIdx++];
    }
    // copying second element 
    int mainArrayIdx = mid + 1;
    for(int i = 0; i < len2; i++){
        left[i] = arr[mainArrayIdx++];
    }

    // merge both of them 

    int idx1 = 0;
    int idx2 = 0;
    mainArrayIdx = s;

}

void mergeSort(int arr[],int s,int e){
    int mid = s + (e - s)/2;

    // base case 
    if(s > e){
        return;
    }

    // calling for the left part 
    mergeSort(arr,s,mid);
    // calling for the right part 
    mergeSort(arr,mid + 1,e);
    // merge both of them 
    merge(arr,s,e);
    
}

int main(){
    int n;
    cin>>n;
    int *arr = new int [n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }
    mergeSort(arr,0,n-1);
} 
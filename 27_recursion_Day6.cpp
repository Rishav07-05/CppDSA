// Quick Sort 

#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    // count nikl liye to pivot ka right index pata lg gya 

    int pivotIdx = s + cnt;
    swap(arr[pivotIdx],arr[s]);

    int i = s ,j = e;
    while(i < pivotIdx && j > pivotIdx){
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIdx && j > pivotIdx){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIdx;
}

void quickSort(int arr[],int s,int e){
    if(s >= e) return;
// partition part or index
    int pIdx = partition(arr,s,e);
// for left part 
    quickSort(arr,s,pIdx-1);
// for right part 
    quickSort(arr,pIdx+1,e);
}


int main(){
    int n;
    cin>> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout<< arr[i] <<" ";
    }
}
#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> arr , int n , int i){
    int largest = i;
    int left = 2 * i + 1; 
    int right = 2 * i + 2;
    
    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

vector<int> mergeHeap(vector<int> &arr1, vector<int> &arr2 , int n , int m)
{
    vector<int> ans;
    ans.push_back(-1);
    for (auto i : arr1)
    {
        ans.push_back(i);
    }
    for(auto i: arr2){
        ans.push_back(i);
    }

    int size = ans.size();

    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(ans, size, i);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> mergedHeap = mergeHeap(arr1, arr2, n, m);

    cout << "Merged Heap: ";
    for (int val : mergedHeap)
    {
        cout << val << " ";
    }
    cout << endl;
}
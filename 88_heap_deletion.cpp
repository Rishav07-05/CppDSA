#include <bits/stdc++.h>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }


    void print(){
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    void deleteFromHeap(){
        if(size == 0)
            return;

        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size){
            int leftIdx = 2 * i;
            int rightIdx = 2 * i + 1;
            if(leftIdx < size && arr[i] < arr[leftIdx]){
                swap(arr[i], arr[leftIdx]);
                i = leftIdx;
            }
            else if(rightIdx < size && arr[i] < arr[rightIdx]){
                swap(arr[i], arr[rightIdx]);
                i = rightIdx;
            }
            else{
                return;
            }
        }
    }

};



int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();
}
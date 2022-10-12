#include <bits/stdc++.h>
using namespace std;

// partition the array using last element as pivot
int partition (int *arr, int low, int high){
    int pivot = arr[high];
    int i = (low);
    for (int j = low; j <= high- 1; j++){
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr[j] <= pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return (i);
}
 
//quicksort algorithm
//Divide and Conquer Algo.
//It picks an element as pivot and partitions the given array around the picked pivot.(Taking last element as pivot in below implementation)
//The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x.
//Unstable sorting, In-place, O(nlog(n)) Time Complexity, O(1) auxiliary space.
void quick_sort(int *arr, int low, int high){
    if (low < high){
        //partition the array 
        int pivot = partition(arr, low, high);
        //sort the sub arrays independently
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}

int main(){
    int n;
    cout<<"Enter number of elements in the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter next "<<n<<" elements in the array: "<<endl;
    for(int i=0; i<n; i++) cin>>arr[i];
    quick_sort(arr, 0, n-1);
    cout<<"Sorted array is: "<<endl;
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}


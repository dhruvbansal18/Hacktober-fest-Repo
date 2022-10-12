#include <bits/stdc++.h>
using namespace std;

//Function to merge the two sorted arrays.
void merge(int *arr, int low, int high, int mid, int n){
    int i, j, k, c[n];
    i = low, k = low, j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++, i++;
        }
        else{
            c[k] = arr[j];
            k++, j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++, i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++, j++;
    }
    for (i = low; i < k; i++) {
        arr[i] = c[i];
    }
}

//Function to sort the array.
//Divide and Conquer Algo.
//It divides the input array into two halves, calls itself for the two halves, and then it merges the two sorted halves.
//Stable sorting, Not In-place, O(nlog(n)) Time Complexity, O(n) auxiliary space.
void merge_sort(int *arr, int low, int high, int n){
    int mid;
    if (low < high){
        //divide the array at mid and sort independently using merge sort
        mid=(high-low)/2 + low;
        merge_sort(arr,low,mid,n);
        merge_sort(arr,mid+1,high,n);
        //merge or conquer sorted arrays
        merge(arr,low,high,mid,n);
    }
}

int main(){
    int n;
    cout<<"Enter number of elements in the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter next "<<n<<" elements in the array: "<<endl;
    for(int i=0; i<n; i++) cin>>arr[i];
    merge_sort(arr, 0, n-1, n);
    cout<<"Sorted array is: "<<endl;
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}


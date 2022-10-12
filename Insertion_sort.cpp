#include <bits/stdc++.h>
using namespace std;

//Function to sort the array.
//The array is virtually split into a sorted and an unsorted part. 
//Values from the unsorted part are picked and placed at the correct position in the sorted part.
//Stable sorting, In-place, O(n^2) Time Complexity, O(1) auxiliary space.
void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){
    int n;
    cout<<"Enter number of elements in the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter next "<<n<<" elements in the array: "<<endl;
    for(int i=0; i<n; i++) cin>>arr[i];
    insertion_sort(arr, n);
}

#include <bits/stdc++.h>
using namespace std;

//Function to sort the array. It takes the largest integer at last pos and then in next iteration, second largest at second last pos and so on.
//Stable sorting, In-place, O(n^2) Time Complexity, O(1) auxiliary space.
void bubblesort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
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
    bubblesort(arr, n);
}

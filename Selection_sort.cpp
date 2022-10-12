#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }

    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
}
int main(){
   int n;
   cout<<"enter the size of array:\n";
   cin>>n;
   int a[n];
   cout<<"enter the elements of array:\n";
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   selection_sort(a,n);

}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0 ; i<n ; i++){ // for the contionuos storage of elements
     cin>>arr[i]; // i liya for 1 - 1 element
    }
    cout<<"the array is"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;    
    }
// for brute force appraoch
// int arr1[n];
// for(int i=0 ; i<n;i++){
// arr1[i] = arr[n-i-1]; // jo array ka 1st element h that will be swapped by 5-0-1=4 it means array ke 4th element se swap hoga
// }
// cout<<"reversed array:";
// for(int i=0 ; i<n;i++){
//     cout<<arr1[i]<<" ";
// }

// optimal solution
//int size = sizeof arr / sizeof arr[0];
for(int i = 0 ; i<n/2 ; i++){ // n/2 because hamara middel element to swap hoga nahi 
    swap(arr[i],arr[n-i-1]); // 1st element and last elemnet swap hongwe
}
cout<<"reversed array";
for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";


}
}

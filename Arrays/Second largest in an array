#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n; // cin - input 
    int arr[n]; //declaring array
    cout<<"enter no. of array"<<endl;
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    cout<<"array is"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
    } 
      
   
    int largest = 0;
    int slargest = 0;
    for(int i = 0;i<n;i++){
         if(arr[i]>largest)
        largest=arr[i];
    }
     cout<<"the largest no. is"<<largest<<endl;
     //second largest
     for(int i = 0;i<n;i++){
         if(arr[i]>slargest && arr[i]!=largest)
         slargest=arr[i];
     }

     cout<<"second largest no. is"<<slargest<<endl;
}

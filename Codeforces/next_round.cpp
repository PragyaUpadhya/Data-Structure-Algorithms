#include<iostream>
using namespace std;
int main(){
int x;
int k;
cout<<"enter the value of x";
cin>>x;
cout<<"enter the value of k";
cin>>k;
int n;
cout<<"enter the size of array"<<endl;
cin>>n; // cin - input 
int arr[n]; //declaring array
cout<<"enter no. of array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
    }
int count = 0;
for(int i=0;i<n;i++){
    if(arr[i]>=arr[k-1] && arr[i] > 0)
    count++;
}
cout<<"the qualified students are"<<count;
}

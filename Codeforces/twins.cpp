#include<iostream>
using namespace std;
int main(){
    int n; //no.of coins
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
}
int count = 0;
int my_sum = 0;
for(int i = 0;i<n;i++){
    my_sum += arr[i];
    if(my_sum>sum-my_sum){
        count++;
        break;
    }
    else{
        continue;
    }
}
cout<<count;
}

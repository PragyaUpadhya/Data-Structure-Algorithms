#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int count = 0 ;
    cin>>s;
    for(int i=1;i<n;i++){
     if(s[i]==s[i-1]){
            count++;
        }
       

}
cout<<count;
return 0;

}

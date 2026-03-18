#include<iostream>
using namespace std;
int main(){
    string t,s;
    cin>>t;
    cin>>s;
    int sh=(s[0]-'0')*10+(s[1]-'0');//at '0' will help to multiply string with number snd print the asky value
    int sm =(s[3]-'0')*10+(s[4]-'0');
    int th = (s[0]-'0')*10+(s[1]-'0');
    int tm = (s[3]-'0')*10+(s[4]-'0');
   

    int m = sh*60+sm;
    int n = th*60+tm;
    int x = m-n;
    if(x<0){
        x+= 1440;
    }
int a = x/60;
int b = x/60;
if(a<10) cout<<"0";
cout<<a<<" ";
if(b<10) cout<<"0";
cout<<b;
}

#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int costa = 0;
    int costb= 0;
    int costc = 0;
    //single cost
    costa=(n*a);
    //special cost
    costb=((n/m)+(n%m!=0?1:0))*b;
    //mixture case 
    costc=((n/m)*b+(n%m)*a);
    int result=min(costa,min(costb,costc));
    cout<<result;
} 

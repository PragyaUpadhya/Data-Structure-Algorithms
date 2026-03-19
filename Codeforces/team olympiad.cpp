//Team Olympiad
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count_prog = 0;
    int one[5000],two[5000],three[5000];
    int count_maths = 0;
    int count_pe = 0;
    for(int i=0;i<n;i++){ cin>>arr[i]; 
        if(arr[i]==1){
        one[count_prog]=i+1;
        count_prog++;
        }
        else if(arr[i]==2){
            two[count_maths]=i+1;
            count_maths++;
        }
        else{
            three[count_pe]=i+1;
            count_pe++;
        }
        }
    int w = count_prog;
    if(count_maths<count_prog) w = 2;
    if(count_pe<count_maths) w = 3;
    cout<<w<<endl;
    for(int i=0;i<w;i++){
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    return 0;
}

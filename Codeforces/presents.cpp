#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n+1]; // input array decalre start with 0 and goes beyound the array limit that is n+1
    int ans[n+1]; // output array with same condition
    for(int i=1;i<=n;i++){ //input array traverse 1,2,3,3
        cin>>p[i]; // 1,2,3 ne kis kis ko gift diya jaise 1 ne diya 2 ko , 2 ne diya 3 ko , 3 ne diya 4 ko
        ans[p[i]] = i; // i is hamare traversing ka array 1,2,3 p[i] pura hamara array 2,3,4,1 1 ko mila 2 se , 2 ko mila 3 se , 3 ko mila 4 s etc
    }
    for(int i=1;i<=n;i++){ // read the answer array from index 1 to n
        cout<<ans[i]<<" "; // ans wale array me traverse kiya and usko print karwa diya
    }
    cout<<endl;
}

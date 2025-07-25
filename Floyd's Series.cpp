#include <iostream>
using namespace std;

int main(){
    int i,j,n=5,z=1;
    for(i=1;i<n;i++){
        for(j=1;j<i+1;j++){
            cout<<" "<<z;
            z++;
        }
        cout<<"\n";
    }
}
// Output:
// 1
// 2 3
// 4 5 6
// 7 8 9 10

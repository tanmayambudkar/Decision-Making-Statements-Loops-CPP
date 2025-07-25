#include <iostream>
using namespace std;

int main(){
    int i,j,n=5;
    char ch='A';
    for(i=1;i<n;i++){
        for(j=1;j<i+1;j++){
            cout<<" "<<ch;
            ch++;
        }
        cout<<"\n";
    }
}
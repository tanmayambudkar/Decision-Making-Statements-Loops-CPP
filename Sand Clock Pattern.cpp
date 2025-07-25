#include <iostream>
using namespace std;

int main() {
    int i, j,k,n=5,a=5,l;
    for(i = 1; i <= n-2; i++) {
        
        for(k=1;k<i;k++)  
        {
            cout << "  "  ; 
        }
        for(j = 1; j <= a; j++) {
            cout << "* "  ; 
            
            
        }
        a=a-2;
        
        cout << "\n" ;
    }
    a=3;
   for(l = 1; l <=2; l++) {
        
        for(k=2;k>l;k--)  
        {
            cout << "  "  ; 
        }
        for(j = 5; j >= a; j--) {
            cout << "* "  ; 
            
            
        }
        a=a-2;
        
        cout << "\n" ;
    }
}
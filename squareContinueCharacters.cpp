#include <iostream>
using namespace std;

int main() {
    
    int n=3;
    char ch = 'A';

    for(int i=0; i<n; i++){ // Outer loop
        for(int j=1; j<=n; j++){ // Inner loop
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}
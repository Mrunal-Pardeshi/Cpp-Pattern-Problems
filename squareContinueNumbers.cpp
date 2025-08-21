#include <iostream>
using namespace std;

int main() {
    
    int n=3;
    int num = 1;

    for(int i=0; i<n; i++){ // Outer loop
        for(int j=1; j<=n; j++){ // Inner loop
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    int n=4;

    for(int i=0; i<n; i++){ // Outer loop
        char ch = 'A';
        for(int j=1; j<=n; j++){ // Inner loop
            cout << ch << " ";
            ch = ch + 1; // ASCII Value of "A" is 65 and on increasing it by 1 it will become 66 which is ASCII value of "B"
        }
        cout<<endl;
    }
    
    
    return 0;
}
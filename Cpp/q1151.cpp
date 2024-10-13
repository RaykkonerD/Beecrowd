#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, i, j=1, k=0, l=0;
    cin >> x;
    for(i=0; i<x; i++){
        if(i < (x-1)){
            cout << k << " ";
        } else {
            cout << k << endl;
        }
            k = j;
            j = (k + l);
            l = k;
    }
    return 0;
}
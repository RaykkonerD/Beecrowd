#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
 
    int arr[3], a, b, c, t;
    cin >> a >> b >> c;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    t = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+3);
    
    for(int i=0; i < 3; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << a << endl << b << endl << c << endl;
    
    return 0;
}
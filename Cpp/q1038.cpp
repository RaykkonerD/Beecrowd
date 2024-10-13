#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int c, q;
    cin >> c >> q;
    cout << fixed << setprecision(2);
    cout << "Total: R$ ";
    
    switch(c){
        case 1:
            cout << (4.00*q) << endl;
            break;
        case 2:
            cout << (4.50*q) << endl;
            break;
        case 3:
            cout << (5.00*q) << endl;
            break;
        case 4:
            cout << (2.00*q) << endl;
            break;
        case 5:
            cout << (1.50*q) << endl;
            break;
    }
 
    return 0;
}
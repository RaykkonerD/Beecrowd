#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int cod1, quan1, cod2, quan2;
    double val1, val2, total;
    
    cin >> cod1 >> quan1 >> val1;
    cin >> cod2 >> quan2 >> val2;
    
    total = (quan1*val1 + quan2*val2);
    
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;
 
    return 0;
}
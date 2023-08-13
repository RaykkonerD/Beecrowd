#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    string name;
    double sal, vend, total;
    
    cin >> name;
    cout << fixed << setprecision(2);
    cin >> sal >> vend;
    
    total = (sal+vend*0.15);
    
    cout << "TOTAL = R$ " << total << endl;
 
    return 0;
}
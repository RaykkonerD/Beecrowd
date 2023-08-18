#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int t, v;
    float l;
    cin >> t >> v;
    l = (t*v)/12.0;
    cout << fixed << setprecision(3);
    cout << l << endl;
 
    return 0;
}
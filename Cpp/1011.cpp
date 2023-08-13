#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
int main() {
 
    double raio, pi, r, vol;
    pi = 3.14159;
    cin >> raio;
    
    r = pow(raio, 3);
    vol = (4.0/3 * pi * r);
    
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << vol << endl;
 
    return 0;
}
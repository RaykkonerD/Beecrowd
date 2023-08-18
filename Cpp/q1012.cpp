#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
    
    double A, B, C, areat, areac, areatra, areaq, arear, pi;
    pi = 3.14159;
    cin >> A >> B >> C;

    areat = (A * C)/2;
    areac = pi * pow(C,2);
    areatra = (A + B) * C / 2;
    areaq = pow(B,2);
    arear = A * B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areat << endl;
    cout << "CIRCULO: " << areac << endl; 
    cout << "TRAPEZIO: " << areatra << endl; 
    cout << "QUADRADO: " << areaq << endl;
    cout << "RETANGULO: " << arear << endl;

    return 0;
}
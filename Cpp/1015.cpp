#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float x1, y1, x2, y2, X, Y, distancia;
    cin >> x1 >> y1 >> x2 >> y2;
    X = pow((x2 - x1), 2);
    Y = pow((y2 - y1), 2);
    distancia = sqrt((X+Y));
    cout << fixed << setprecision(4);
    cout << distancia << endl;
 
    return 0;
}
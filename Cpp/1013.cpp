#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int a, b, c, MaiorAB, MaiorABC;
    cin >> a >> b >> c;
    
    MaiorAB = (a+b+abs(a-b))/2;
    MaiorABC = (MaiorAB+c+abs(MaiorAB-c))/2;
    
    cout << MaiorABC << " eh o maior" << endl;
 
    return 0;
}
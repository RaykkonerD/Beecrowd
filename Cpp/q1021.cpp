#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double valor;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int moedas[6] = {100, 50, 25, 10, 5, 1};
  
    cin >> valor;
    cout << fixed;
    cout << "NOTAS:" << endl;
  
    for(double nota : notas){
      int n = valor/nota;
      cout << n << " nota(s) de R$ " << setprecision(2) << nota << endl;
      valor -= n * nota;
    }
  
    valor *= 100;
    cout << "MOEDAS:" << endl;
  
    for(double moeda : moedas){
      int n = valor/moeda;
      cout << n << " moeda(s) de R$ " << setprecision(2) << moeda/100 << endl;
      valor -= n * moeda;
    }
    
    return 0;
}
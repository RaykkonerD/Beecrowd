#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double valor, imposto;
  cin >> valor;

  if(valor >= 0 && valor <= 2000.00){
    
    cout << "Isento" << endl;
    
  } else {
    if(valor > 2000.00 && valor <= 3000.00){
      
       valor = (valor - 2000);
       imposto = (0.08*valor);

    } else if(valor > 3000.00 && valor <= 4500.00){

       imposto = (0.18*(valor-3000) + (0.08*1000));

    } else {

       imposto = (0.28*(valor-4500) + (0.18*1500) + (0.08*1000));

    }

    cout << fixed << setprecision(2);
    cout << "R$ " << imposto << endl;

  }

  return 0;
}
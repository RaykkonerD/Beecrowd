#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double valor, ganho, novosalario;
  int reajuste;
  cin >> valor;
  
  ganho = 0;
  novosalario = 0;

  if(valor >= 0 && valor <= 400.00){ 
     reajuste = 15; 
  } else if(valor > 400.00 && valor <= 800.00){
     reajuste = 12; 
  } else if(valor > 800.00 && valor <= 1200.00){
     reajuste = 10;
  } else if(valor > 1200.00 && valor <= 2000.00){
     reajuste = 7;
  } else {
     reajuste = 4;
  }

  ganho = (reajuste*valor/100);
  novosalario = (reajuste*valor/100)+valor;

  cout << "Novo salario: " << fixed << setprecision(2) << novosalario << endl;
  cout << "Reajuste ganho: " << fixed << setprecision(2) << ganho << endl;
  cout << "Em percentual: " << reajuste << " %" << endl;

  return 0;
}
    
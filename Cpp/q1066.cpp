#include <iostream>
using namespace std;

int main(){
    
  int num;
  int pares = 0;
  int impares = 0;
  int positivos = 0;
  int negativos = 0;

  for(int i=0; i < 5; i++){
    cin >> num;
    if((num%2) == 0){
        pares++;
    } else {
        impares++;
    }
    
    if(num > 0){
        positivos++;
    } else if(num < 0){
        negativos++;
    }
  }
  cout << pares << " valor(es) par(es)" << endl;
  cout << impares << " valor(es) impar(es)" << endl;
  cout << positivos << " valor(es) positivo(s)" << endl;
  cout << negativos << " valor(es) negativo(s)" << endl;

  return 0;
}
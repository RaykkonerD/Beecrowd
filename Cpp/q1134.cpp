#include <iostream>
using namespace std;

int main(){
  int num, alcool=0, gasolina=0, diesel=0;
  cin >> num;

  while(num != 4){
    
    if(num >= 0){
      if(num == 1){
        alcool++;
      } else if(num == 2){
        gasolina++;
      } else if(num == 3){
        diesel++;
      }
    }
    cin >> num;
  }

  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << alcool << endl;
  cout << "Gasolina: " << gasolina << endl;
  cout << "Diesel: " << diesel << endl;
  return 0;
}
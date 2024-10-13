#include <iostream>
using namespace std;

int main(){
    
  int num, quant=0, i;

  for(i=0; i < 5; i++){
    cin >> num;
    if((num%2) == 0){
        quant++;
    }
  }

  cout << quant << " valores pares" << endl;
  
  return 0;
}
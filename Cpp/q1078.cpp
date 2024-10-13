#include <iostream>
using namespace std;

int main(){
  int num, resultado, i;
  cin >> num;

  if(num > 2 && num < 1000){
    for(i=1; i < 11; i++){
        resultado = (i*num);
        cout << i << " x " << num << " = " << resultado << endl;
    }
  }
  
  return 0;
}
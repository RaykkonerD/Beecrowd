#include <iostream>
using namespace std;

int main(){

  int q;
  q = 0;

for(int i=0; i < 6; i++){
  float valor;
  cin >> valor;
  if(valor > 0){
      q++;
  }
}

  cout << q << " valores positivos\n";
  return 0;
}
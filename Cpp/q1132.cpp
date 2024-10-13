#include <iostream>
using namespace std;

int main(){
  int n1, n2, maior, soma=0;
  cin >> n1 >> n2;
  if(n2 > n1){
      maior = n2;
      n2 = n1;
      n1 = maior;
  }

  for(; n2 <= n1; n2++){
    if((n2%13) != 0){
        soma += n2;
    }
  }

  cout << soma << endl;
  return 0;
}
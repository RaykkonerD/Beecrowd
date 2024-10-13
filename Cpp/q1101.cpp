#include <iostream>
using namespace std;

int main(){
  int n1, n2, maior, soma;
  while(true){
    cin >> n1 >> n2;
    if(n1 <= 0 || n2 <= 0){
        break;
    }
    if(n2 > n1){
        maior = n2;
        n2 = n1;
        n1 = maior;
    }
    soma = 0;
    for(int j=n2; j <= n1; j++){
      cout << j << " ";
      soma += j;
    }

    cout << "Sum=" << soma << endl;
  }
  return 0;
}
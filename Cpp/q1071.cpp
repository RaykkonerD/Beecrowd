#include <iostream>
using namespace std;

int main(){
    
  int n1, n2, i, maior, soma=0;
  cin >> n1 >> n2;
  if(n2 > n1){
      maior = n2;
      n2 = n1;
      n1 = maior;
  }

  for(i = (n2+1); i < n1; ++i){
    if((i%2) != 0){
        soma += i;
    }
  }

  cout << soma << endl;
  
  return 0;
}
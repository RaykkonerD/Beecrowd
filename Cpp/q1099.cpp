#include<iostream>
using namespace std;
int main(){
    
  int q, n1, n2, soma=0, max;
  cin >> q;

  for(int x=0; x < q; x++){
    cin >> n1 >> n2;
    if(n2 > n1){
      max = n2;
      n2 = n1;
      n1 = max;
    }
      if(n1 != n2 && n1 != (n2+1)){
        for(int i=(n2+1); i < n1; i++){
           if((i%2) != 0){
             soma += i;
           }
        }
      }
    cout << soma << endl;
    soma = 0;
  }
  return 0;
}
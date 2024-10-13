#include <iostream>
using namespace std;

int main(){
  int n1, n2;

  while(true){
    cin >> n1 >> n2;
    if(n1 == n2){ break;}
    
    if(n1 > n2){
        cout << "Decrescente" << endl;
    } else {
        cout << "Crescente" << endl;
    } 
  }
  return 0;
}

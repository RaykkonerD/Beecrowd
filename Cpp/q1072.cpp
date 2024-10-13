#include <iostream>
using namespace std;

int main(){
    
  int q, num, i, dentro=0, fora=0;
  cin >> q;
  
  for(i=0; i < q; i++){
    cin >> num;
    if(num >= 10 && num <= 20){
        dentro++;
    } else {
        fora++;
    }
  }
  cout << dentro << " in" << endl;
  cout << fora << " out" << endl;
  
  return 0;
}
        
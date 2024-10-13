#include <iostream>
using namespace std;

int main(){
  int num, pot, i;
  cin >> num;

  for(i=1; i <= num; i++){
    if((i%2) == 0){
        pot = (i*i);
        cout << i << "^2 = " << pot << endl;
    }
  }
  return 0;
}
#include <iostream>
using namespace std;

int main(){
    
  int num, i, j;
  cin >> num;

  if((num%2) == 1){
    cout << num << endl;
    for(i=0; i < 5; i++){
      num += 2;
      cout << num << endl;
    }
  } else {
    num += 1;
    for(j=0; j < 6; j++){
      cout << num << endl;
      num += 2;
    }
  }
  
  return 0;
}
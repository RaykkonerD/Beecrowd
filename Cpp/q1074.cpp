#include <iostream>
using namespace std;

int main(){
  int q, i, num;
  cin >> q;

  for(i=0; i < q; i++){
    cin >> num;
    if(num > 0){
      if((num%2) == 0){
            cout << "EVEN POSITIVE\n";
      } else {
            cout << "ODD POSITIVE\n";
      }
    } else if(num < 0){
        if((num%2) == 0){
            cout << "EVEN NEGATIVE\n";
        } else {
            cout << "ODD NEGATIVE\n";
        }
    } else {
        cout << "NULL\n";
    }
  }
  
  return 0;
}
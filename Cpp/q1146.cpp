#include <iostream>
using namespace std;

int main(){
  int num, i;
  cin >> num;

  while(num != 0){
    for(i=1; i <= num; i++){
        if(i != num){
            cout << i << " ";
        } else {
            cout << i << endl;
        }
    }
   
   cin >> num;
  }
  return 0;
}
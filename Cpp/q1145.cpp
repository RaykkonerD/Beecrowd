#include <iostream>
using namespace std;

int main(){
  int x, y, a=1;
  cin >> x >> y;
  
  while(a < y){
    for(int i=1; i<=x; i++){
      if(i < x){
       cout << a << " ";
      } else {
       cout << a << endl;
      }
      a++;
    }
  }
  return 0;
}
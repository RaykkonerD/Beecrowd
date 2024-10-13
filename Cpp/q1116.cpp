#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int N, i;
  float x, y, res;
  cin >> N;
  
  for(i=0; i < N; i++){
    cin >> x >> y;
    res = (x/y);
    if(y != 0){
      cout << fixed;
      cout << setprecision(1) << res << endl;
    } else {
      cout << "divisao impossivel" << endl;
    }
  }
  return 0;
}
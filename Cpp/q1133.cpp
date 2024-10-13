#include <iostream>
using namespace std;

int main(){
  int n1, n2, m, min;
  cin >> n1 >> n2;
  if(n2 > n1){
      m = n2;
      n2 = n1;
      n1 = m;
  } 
  min = (n2 + 1);

  if(n1 >= 0 && n2 >= 0){
    for(int x=min; x < n1; x++){
        if((x%5) == 2 || (x%5) == 3){
            cout << x << endl;
        }
    }
  }
  return 0;
}


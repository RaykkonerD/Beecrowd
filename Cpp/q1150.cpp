#include <iostream>
using namespace std;

int main(){
  int x, z, q=0, i;
  cin >> x;
  while(true){
    cin >> z;
    if(z > x){
        break;
    }
  }

  if(x < z){
    for(i=1; i < z; i+=x){
      q++;
      x++;
    }  
  } else {
      q = 1;
  }

  cout << q << endl;
  return 0;
}
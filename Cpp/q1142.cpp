#include <iostream>
using namespace std;

int main(){
    int num, a=1, b=2, c=3;
    cin >> num;

  if(num >= 0){
    for(int i=0; i < num; i++){
        cout << a << " " << b << " " << c << " PUM" << endl;
        a += 4;
        b += 4;
        c += 4;
    }
  }
  return 0;
}
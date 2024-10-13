#include <iostream>
using namespace std;

int main(){
  int I = 1;
  int J = 7;

  for(int i=0; i < 5; i++){
    cout << "I=" << I << " J=" << J << endl;
    J -= 1;
    cout << "I=" << I << " J=" << J << endl;
    J -= 1;
    cout << "I=" << I << " J=" << J << endl;
    I += 2;
    J += 4;
  }
  return 0;
}
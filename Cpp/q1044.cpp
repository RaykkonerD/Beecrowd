#include<iostream>

using namespace std;

int main(){

  int n1, n2, divisor1, divisor2;
  cin >> n1 >> n2;

  divisor1 = n2%n1;
  divisor2 = n1%n2;

  if(divisor1 == 0 || divisor2 == 0){
      cout << "Sao Multiplos" << endl;
  } else {
      cout << "Nao sao Multiplos" << endl;
  }
}
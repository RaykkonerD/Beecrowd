#include <iostream>
#include <algorithm>

using namespace std;
 
int main(){

  float A, B, C, arr[3];
  int t;
  cin >> arr[0] >> arr[1] >> arr[2];

  t = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr+t);
  A = arr[2];
  B = arr[1];
  C = arr[0];

  if(A >= B+C){

    cout << "NAO FORMA TRIANGULO" << endl;

  } else if((A*A) == (B*B)+(C*C)){

    cout << "TRIANGULO RETANGULO" << endl;

  } else if((A*A) > (B*B)+(C*C)){

    cout << "TRIANGULO OBTUSANGULO" << endl;

  } else if((A*A) < (B*B)+(C*C)){

    cout << "TRIANGULO ACUTANGULO" << endl;

  }

  if(A == B && B == C){

    cout << "TRIANGULO EQUILATERO" << endl;

  } else if(A == C || B == C || A == B){

    cout << "TRIANGULO ISOSCELES" << endl;

  }
  
  return 0;
}
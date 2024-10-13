#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
  float q=0.0, soma=0.0, media;

  for(int i=0; i < 6; i++){
    float num;
    cin >> num;
      if(num > 0){
        q++;
        soma += num;
      }
  }
  media = (soma/q);

  cout << q << " valores positivos" << endl;
  cout << fixed << setprecision(1) << media << endl;
  
  return 0;
}
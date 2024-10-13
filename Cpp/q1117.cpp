#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int v = 0;
  float nota, n=0, media;
  
  while(true){
    if(v == 2){ break;}
    cin >> nota;
    if(v == 0){
        if(nota >= 0 && nota <= 10){
            n += nota;
            v++;
        } else {
            cout << "nota invalida" << endl;
        }
    } else {
        if(nota >= 0 && nota <= 10){
            n += nota;
            media = (n/2.0);
            v++;
        } else {
            cout << "nota invalida" << endl;
        }
    }
}
  cout << fixed << setprecision(2);
  cout << "media = " << media << endl;
  return 0;
}
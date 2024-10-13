#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int v = 0, q = 0;
  float nota, media, n=0.0;

  while(true){
    cin >> nota;

    if(q == 0){
        if(nota >= 0.0 && nota <= 10.0){
            n += nota;
            q++;
        } else {
            cout << "nota invalida" << endl;
        }
    } else {
        if(nota >= 0.0 && nota <= 10.0){
           n += nota;
           media = (n/2.0);
           cout << fixed << setprecision(2);
           cout << "media = " << media << endl;
           cout << "novo calculo (1-sim 2-nao)" << endl;
           cin >> v;
           if(v == 2){ break;}
           
        while(v != 1 && v != 2){
           cout << "novo calculo (1-sim 2-nao)" << endl;
           cin >> v;
           if(v == 2){
             exit(0);
           }
        }
        q = 0;
        n = 0.0;
        
        } else {
           cout << "nota invalida" << endl;
        }
    }
  }
  return 0;
}
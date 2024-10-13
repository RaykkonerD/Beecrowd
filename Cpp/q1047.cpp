#include <iostream>
using namespace std;

int main(){

  int h1, m1, h2, m2, horatotal, minutototal;
  cin >> h1 >> m1 >> h2 >> m2;

  horatotal = h2 - h1;
  minutototal = m2 - m1;

    if (minutototal < 0){
        horatotal--;
        minutototal += 60;
    }

    if (horatotal < 0){
        horatotal += 24;
    }
  
    if (horatotal == 0 && minutototal == 0){
        horatotal += 24;
    }

    cout << "O JOGO DUROU " << horatotal << " HORA(S) E " << minutototal << " MINUTO(S)" << endl;

    return 0;
}
    
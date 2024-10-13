#include <iostream>
#include <string>
using namespace std;

int main(){
    
  int dInicial, hInicial, mInicial, sInicial, dFinal, hFinal, mFinal, sFinal, dias, horas, minutos, segundos;
  string ds, ps;

  cin >> ds >> dInicial;
  cin >> hInicial >> ps >> mInicial >> ps >> sInicial;
  cin >> ds >> dFinal;
  cin >> hFinal >> ps >> mFinal >> ps >> sFinal;
  
  dias = (dFinal - dInicial);
  horas = (hFinal - hInicial);
  minutos = (mFinal - mInicial);
  segundos = (sFinal - sInicial);

  if(segundos < 0){
    segundos += 60;
    minutos--;
  }
  
  if(minutos < 0){
     minutos += 60;
     horas--;
  }

  if(horas < 0){
     horas += 24;
     dias--;
  }

  if(dias == 0 && horas == 0 && minutos == 0 && segundos == 0){
     minutos++;
  }

  cout << dias << " dia(s)" << endl;
  cout << horas << " hora(s)" << endl;
  cout << minutos << " minuto(s)" << endl;
  cout << segundos << " segundo(s)" << endl;
  
  return 0;
}
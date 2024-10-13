#include <iostream>
using namespace std;

int main(){
  int grenal, g, i, Ggols=0, Igols=0, Emp=0, qGrenais=0;

  while(true){
    cin >> i >> g;

    if(g > i){
       Ggols++;
    } else if(i > g){
       Igols++;
    } else {
       Emp++;
    }
  
  qGrenais++;
  cout << "Novo grenal (1-sim 2-nao)" << endl;
  cin >> grenal;
  if(grenal != 1){ break;}
  
  }

  cout << qGrenais << " grenais" << endl;
  cout << "Inter:" << Igols << endl;
  cout << "Gremio:" << Ggols << endl;
  cout << "Empates:" << Emp << endl;

  if(Igols > Ggols){
    cout << "Inter venceu mais" << endl;
  } else if(Ggols > Igols){
    cout << "Gremio venceu mais" << endl;
  } else {
    cout << "Nao houve vencedor" << endl;
  }
  
  return 0;
}
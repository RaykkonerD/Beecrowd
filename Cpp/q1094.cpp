#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int N;
  float num, total, ratos=0, coelhos =0, sapos=0, percRatos, percCoelhos, percSapos;
  char letra;
  cin >> N;
  
  for(int i=0; i < N; i++){
    cin >> num;
    cin >> letra;
      if(letra == 'R'){
        ratos += num;
      } else if(letra == 'C'){
        coelhos += num;
      } else {
        sapos += num;
      }
  }
    total = (ratos + coelhos + sapos);
    percRatos = (ratos*100)/total;
    percCoelhos = (coelhos*100)/total;
    percSapos = (sapos*100)/total;
    
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << percCoelhos << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << percRatos << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << percSapos << " %" << endl;
  return 0;
}
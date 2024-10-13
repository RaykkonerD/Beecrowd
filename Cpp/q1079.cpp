#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int q, i;
  float n1, n2, n3, media;
  cin >> q;

  for(i=0; i < q; i++){
    cin >> n1 >> n2 >> n3;
    media = ((n1*2+n2*3+n3*5)/10);
    cout << fixed << setprecision(1) << media << endl;
  }
  return 0;
}

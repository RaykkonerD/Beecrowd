#include <iostream>
using namespace std;

int main(){

  int end, start, case1, case2;
  cin >> start >> end;
 
  case1 = (24 - start + end);
  case2 = (end - start);

  if(start == end){
    cout << "O JOGO DUROU 24 HORA(S)" << endl;
  } else if(start > end){
    cout << "O JOGO DUROU " << case1 << " HORA(S)" << endl;
  } else if(end > start){
    cout << "O JOGO DUROU " << case2 << " HORA(S)" << endl;
  }

  return 0;
}
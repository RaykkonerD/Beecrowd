#include <iostream>
 
using namespace std;
 
int main() {
 
    int num, n;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    cin >> num;
    
    cout << num << endl;
    for(int nota : notas){
        n = (num/nota);
        cout << n << " nota(s) de R$ " << nota << ",00" << endl;
        num -= (n*nota);
    }
 
    return 0;
}

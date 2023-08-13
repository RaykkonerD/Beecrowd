#include <iostream>
 
using namespace std;
 
int main() {
 
    int num, a, b, c, d, e, f;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    cin >> num;
    
    cout << num << endl;
    
    a = (num/100);
    cout << a << " nota(s) de R$ 100,00" << endl;
    num -= (a*100);
    
    b = (num/50);
    cout << b << " nota(s) de R$ 50,00" << endl;
    num -= (b*50);
    
    c = (num/20);
    cout << c << " nota(s) de R$ 20,00" << endl;
    num -= (c*20);
    
    d = (num/10);
    cout << d << " nota(s) de R$ 10,00" << endl;
    num -= (d*10);
    
    e = (num/5);
    cout << e << " nota(s) de R$ 5,00" << endl;
    num -= (e*5);
    
    f = (num/2);
    cout << f << " nota(s) de R$ 2,00" << endl;
    num -= (f*2);
    
    cout << num << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}
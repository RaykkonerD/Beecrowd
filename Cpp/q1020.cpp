#include <iostream>
using namespace std;

int main() {
 
    int idd, a, m;
    cin >> idd;
    
    a = (idd/365);
    cout << a << " ano(s)" << endl;
    idd -= (a*365);
    
    m = (idd/30);
    cout << m << " mes(es)" << endl;
    idd -= (m*30);
    
    cout << idd << " dia(s)" << endl;
    
    return 0;
}
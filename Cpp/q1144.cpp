#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, i;
    cin >> num;

    for(i=1; i <= num; i++){
        int quad = pow(i,2);
        int cubo = pow(i,3);
        cout << i << " " << quad << " " << cubo << endl;
        cout << i << " " << (quad + 1) << " " << (cubo + 1) << endl;
    }
    return 0;
}
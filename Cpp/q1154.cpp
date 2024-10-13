#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float age, sum=0.0, count=0.0;
    while(true){
        cin >> age;
        if(age < 0){
            break;
        } else {
            sum += age;
            count++;
        }
    }
    
    cout << fixed << setprecision(2);
    cout << (sum/count) << endl;
    return 0;
}
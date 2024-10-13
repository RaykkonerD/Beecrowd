#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    float n1, n2, n3, n4, ne, media, mf;
    cin >> n1 >> n2 >> n3 >> n4 >> ne;
    
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if(media >= 7.0){
        cout << "Aluno aprovado.\n";
    } else if(media >= 5.0 && media <= 6.9){
        cout << "Aluno em exame.\n";
        cout << "Nota do exame: " << ne << endl;
        mf = (ne + media)/2;
        
        if(mf >= 5.0){
            cout << "Aluno aprovado.\n";
        } else {
            cout << "Aluno reprovado.\n";
        }

        cout << "Media final: " << mf << endl;
  
    } else {
        cout << "Aluno reprovado.\n";
    }

    return 0;
}
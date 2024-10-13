#include <iostream>
#include <string>

using namespace std;

int main(){

 string c1, c2, c3;
 cin >> c1 >> c2 >> c3;

 if(c1 == "vertebrado"){

    if(c2 == "mamifero"){

        if(c3 == "onivoro"){

          cout << "homem" << endl;

        } else {

          cout << "vaca" << endl;

        }

    } else {

        if(c3 == "onivoro"){

          cout << "pomba" << endl;

        } else {

          cout << "aguia" << endl;

        }
    }

 } else {

    if(c2 == "anelideo"){

        if(c3 == "hematofago"){

          cout << "sanguessuga" << endl;

        } else {

          cout << "minhoca" << endl;

        }
        
    } else {

        if(c3 == "hematofago"){

          cout << "pulga" << endl;

        } else {

          cout << "lagarta" << endl;

        }
    }
 }
 
 return 0;
}
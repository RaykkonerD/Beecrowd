#include <iostream>
#include <iomanip>

using namespace std;

int main(){

   float a, b, c, ab, bc, ac, perimetro, area;

   cin >> a >> b >> c;

   ab = (a+b);
   bc = (b+c);
   ac = (a+c);

   if(a < bc && b < ac && c < ab){
       perimetro =(a+b+c);
       cout << fixed << setprecision(1);
       cout << "Perimetro = " << perimetro << endl;
   } else {
       area = ((a+b)*c)/2;
       cout << fixed << setprecision(1);
       cout << "Area = " << area << endl;
   }
}
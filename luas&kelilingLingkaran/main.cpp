#include <iostream>
#include <cstring>

using namespace std;

int main()

{
   const float PHI1 = 3.1428571428571428571;
   const float PHI2 = 3.14;
   float PHI, luas, keliling, volumebola;
   int jari2;
   
   jari2 = 7.0;
   if (jari2 % 7 == 0)
    PHI=PHI1;
   else
    PHI=PHI2; 
   luas = PHI * (jari2 *  jari2);
   keliling = PHI * (jari2 + jari2);
   volumebola = PHI * PHI * PHI * PHI * (jari2 *  jari2 * jari2);
   cout<<"Luas = "<<luas<<endl;
   cout<<"Keliling = "<<keliling<<endl;
   cout<<"volumebola = "<<volumebola<<endl;


	return 0;
}

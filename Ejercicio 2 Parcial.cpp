#include <iostream>
using namespace std;

int main() {
   int numero;
   
   cout << "Ingrese un numero del 1 al 4: ";
   cin >> numero;
   
   switch(numero) {
      case 1:
         cout<<"El numero "<<numero<<" corresponde a la estacion Verano"<<endl;
         break;
      case 2:
         cout<<"El numero "<<numero<<" corresponde a la estacion Primavera"<<endl;
         break;
      case 3:
         cout<<"El numero "<<numero<<" corresponde a la estacion Invierno"<<endl;         
         break;
      case 4:
         cout<<"El numero "<<numero<<" corresponde a la estacion Otono"<<endl;
         break;
      default:
         cout<<"El numero ingresado no es valido"<<endl;
   }
   
   return 0;
}


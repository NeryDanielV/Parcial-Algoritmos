#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un numero para poner la tabla: ";
    cin >> numero;

    cout << "Tabla de multiplicar de " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}






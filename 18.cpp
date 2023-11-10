#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n;
    int factorial = 1;
    
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;

    if (n < 0) { // si el numero dijitado en menor q cero, tonces es negativo y el programa se va a salir...
        cout << "El factorial no esta definido para numeros negativos." << endl;
    }
	else{ //si es positivo entonces se realizara la siguieste operacion... 
        for (int i=1; i<=n; i++) {
            factorial *= i; //multiplicando 
        }

        cout << "El factorial de " << n << " es: " << factorial << endl; //digitando el factorial...
    }
    
    getch();
    return 0;
}
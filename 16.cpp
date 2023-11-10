#include <iostream>
#include<conio.h>

using namespace std;

int main() {
    char continuar, respuesta;
    int inicio = 1, fin = 1000, tamanoGrupo;
    
    do {
        //Pedir al usuario que ingrese el tamaño del grupo
        cout<<"Introduce la longitud del grupo: ";
        cin>>tamanoGrupo;

        for (int i=inicio; i<=fin; i++) {
            cout<<i<<" ";
            // Verificar si se han mostrado el tamaño deseado de números y preguntar al usuario si desea continuar
            if ((i - inicio + 1) % tamanoGrupo == 0){
                cout << "\nDeseas ver mas numeros? (S/N): ";
                cin >> respuesta;

                if (respuesta != 'S' && respuesta != 's'){
                    break; // Salir del bucle si el usuario no desea continuar
                }
            }
        }
    } while (continuar == 'S' || continuar == 's');
    
    getch();
    return 0;
}
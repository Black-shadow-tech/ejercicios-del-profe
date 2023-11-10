#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int numero;
    int contador = 0;
    int maxRepeticiones = 0; //registra la cantidad maxima de repeticiones consecutivas de un numero..
    int numeroMasRepetido;
    int repeticionesActuales = 1;
    int numeroAnterior = -1;
    
    cout<<"Cuando ingreses 0, el programa mostrara el resultado.\n";

    while(true){
        cout<<"\nDigite un numero: ";
		cin>>numero;
		
        if(numero == 0){
            break; //Si el usuario digita 0, saldra automaticamente del bucle..
        }
        contador++; //esta duncion nos permitira llevar un regitro del numero
                    //total de instruciones...    

        if (numero == numeroAnterior) { //Esto se utiliza para llevar un seguimientos de las 
            repeticionesActuales++;      //repeticiones consecutivas del mismo número que el usuario ingresa
        } else {
            repeticionesActuales = 1;
        }

        if (repeticionesActuales > maxRepeticiones){
            maxRepeticiones = repeticionesActuales;
            numeroMasRepetido = numero;
        }

        numeroAnterior = numero;
    }

    if (contador > 0){
        cout<<"El numero mas repetido es el "<<numeroMasRepetido<<" y se ha escrito "<<maxRepeticiones<<" veces."<<endl;
        cout << "Se introdujeron un total de " << contador << " numeros." << endl;
    } else {
        cout << "No se introdujeron numeros." << endl;
    }
    
    getch();
    return 0;
}

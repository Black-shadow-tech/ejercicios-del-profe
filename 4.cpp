/*
4- Crear un programa que reciba todos los atributos/características de un vehículo e imprima
 una ficha técnica divertida con losf datos introducidos.


*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int edad, fuerza,apuesta, numero, resta1, resta2, resta3;
	char nombre[20], nombreC[10], color[10], modelo[10];
	cout<<"BIENVENIDO A LA CARRERA DE FAST BLACK:\n";
	cout<<"DESCRIBA SU AUTO DE CARRERA:\n";
	
	cout<<"\nNombre? ";
	cin>>nombre;
	cout<<"Edad? ";
	cin>>edad;
	cout<<"Nombre del carro? ";
	cin>>nombreC;
	cout<<"Cuantos (HP) tiene? ";
	cin>>fuerza;
	cout<<"Modelo del carro? ";
	cin>>modelo;
	cout<<"Color del carro? ";
	cin>>color;
	cout<<"Numero de posicion? ";
	cin>>numero;
	cout<<"Cuantos desea apostar? ";
	cin>>apuesta;
	
	cout<<"\nImformacion del competidor recogida: "<<endl;
	cout<<"Nombre del conductor: "<<nombre<<endl;
	cout<<"Edad de conductor: "<<edad<<endl;
	cout<<"Carro: "<<nombreC<<endl;
	cout<<"Modelo: "<<modelo<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Caballos de fuerza: "<<fuerza<<endl;
	cout<<"Numero de posicionamiento: "<<numero<<endl;
	cout<<"Apostando: "<<apuesta<<endl;
	
	if((fuerza >= 300) && (edad >= 25 && edad < 40) && (apuesta >= 10000)){
		cout<<"\nFelicidades a ingresado oficialmente a la carrera :D"<<endl;
	}
	else{
		cout<<"\nNo cumple con algunos de los requisito para entrar a la carrera y  son los siguientes: "<<endl;
		resta1 = 300 - fuerza;
		resta2 = 25 - edad;
		resta3 = 10000 - apuesta;
		
		cout<<"\nTe falta: "<<resta1<<" caballos de fuerza."<<endl;
		cout<<"Te falta "<<resta2<<" anos."<<endl;
		cout<<"Te falta "<<resta3<<" pesos."<<endl; 
	}
	return 0;
}
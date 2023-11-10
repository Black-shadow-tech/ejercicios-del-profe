#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/*
int main(){
	char nombre[3][31], apellido[3][61];
	
	for(int i=0; i<3; i++){
		cout<<"\nDigite nombre: ";
		cin.getline(nombre[i],31,'\n');
		cout<<"\nDigite apellido: ";
		cin.getline(apellido[i],61,'\n');
	}
	
	for(int i=0; i<3; i++){
		cout<<"\n"<<nombre[i]<<"       "<<apellido[i];

	}
	
	
	
	getch();
	return 0;
}
*/

int main(){
	string nombre[] = {
		"Moises",
		"Alberto",
		"Laura",
		"Geremy",
		"Michael",
		"Jesus",
		"Oscar",
		"Raime",
	};                   
	
	string apellido[] = {
		"Alcantara",
		"Ramirez",
		"Tavarez",
		"Ricargil",
		"Manolo",
		"Anival",
		"Peguero",
		"Medina",
   };

	
	for(int i=0; i<8; i++){
		cout<<"\n* "<<nombre[i]<<"     "<<apellido[i];

	}
	
	
	
	getch();
	return 0;
}

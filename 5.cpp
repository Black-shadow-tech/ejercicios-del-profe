#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float n, numero[100],suma = 0, resta = 0, mult = 1, divi = 0, prom = 0;
	int opc;
	cout<<"CALCULADORA PARA BRUTOS. "<<endl;
	cout<<"1: Sumar sus numeros: "<<endl;
	cout<<"2: Restar sus numeros: "<<endl;
	cout<<"3: multiplicar sus numeros: "<<endl;
	cout<<"4: dividir sus numeros: "<<endl;
	cout<<"\nDigite el numero de la opcion que quiere ejecutar: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"\nDigite el numero de elementos a sumar:\n";
			cin>>n;
			for(int i=0; i<n; i++){
				cout<<"\nDigite un numero ";
				cin>>numero[i];
				suma += numero[i];
			}
			
			prom = suma / n;
			cout<<"\nla suma es: "<<suma<<endl;
			cout<<"El promedio es: "<<prom<<endl;
			
			
		case 2:
			cout<<"\nDigite el numero de elementos a restar: ";
			cin>>n;
			for(int i=0; i<n; i++){
				cout<<"\nDigite un numero ";
				cin>>numero[i];
				resta -= numero[i];
			}
			
			prom = resta / n;
			cout<<"\nla resta es: "<<resta<<endl;
			cout<<"El promedio es: "<<prom<<endl;
			
				
		case 3:
			cout<<"\nDigite el numero de elementos a multiplicar: ";
			cin>>n;
			for(int i=0; i<n; i++){
				cout<<"\nDigite un numero ";
				cin>>numero[i];
				mult *= numero[i];
			}
			
			prom = mult / n;
			cout<<"\nla multiplicacion es: "<<mult<<endl;
			cout<<"El promedio es: "<<prom<<endl;
			
		case 4:
			cout<<"\nDigite el numero de elementos a dividir: ";
			cin>>n;
			for(int i=0; i<n; i++){
				cout<<"\nDigite un numero ";
				cin>>numero[i];
				divi /= numero[i];
			}
			
			prom = divi/ n;
			cout<<"\nla divicion es: "<<divi<<endl;
			cout<<"El promedio es: "<<prom<<endl;	
		default: cout<<"\nGrasias y q pase un buen dia :D "; break;
	}	
					

	getch();
	return 0;
}
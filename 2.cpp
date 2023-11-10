#include<iostream>
using namespace std;

int main(){
	
	int n1,n2, suma=0, resta=0, multiplicacion=0, divicion=0;
	
	cout<<"BIEVENIDO:\n";
	cout<<"Digigite un numero: ";
	cin>>n1;
	cout<<"Digite otro numero: ";
	cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	divicion = n1 / n2;
	
	cout<<"\nSuma: "<<suma<<endl;
	cout<<"Resta: "<<resta<<endl;
	cout<<"Multiplicacion: "<<multiplicacion<<endl;
	cout<<"Divicion: "<<divicion<<endl;
	
	return 0;
}
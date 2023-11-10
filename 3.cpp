#include<iostream>
using namespace std;

int main(){
	
	int n1, n2, n3, n4,promedio;
	
	
	cout<<"BIENVENIDO, ESTE PROGRAMA CALCULA EL PROMEDIO DE LAS CALIDICACIONES DE LAS 4 MATERIAS BASICAS:\n";
	
	cout<<"\nDigite la nota de lennguage: ";
	cin>>n1; 
	cout<<"Digite la nota de matematica: ";
	cin>>n2; 
	cout<<"Digite la nota de naturales: ";
	cin>>n3; 
	cout<<"Digite la nota de sociales: ";
	cin>>n4; 
	
	promedio = (n1 + n2 + n3 + n4) / 4;
	
	cout<<"\nPromedio de la 4 materias basicas: "<<promedio<<endl;
	
	
	return 0;
}
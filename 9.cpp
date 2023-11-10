#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	int numero;


    cout<<"Digite numero: ";
	cin>>numero;

	if(numero == 0){
		cout<<"\nEl numero es cero"<<endl;
	}
	else if(numero%2 == 0){ // si queremos saber q numero es par e imprar la formula es: numero%2 == 0...
		cout<<"\nEl numero "<<numero<<" es un numero compuesto."<<endl; 
	}
    else{
		cout<<"\nEl numero "<<numero<<" es un numero primo."<<endl;
	}
	
	getch();
	return 0;
}
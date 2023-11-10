#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	int sueldo_bruto;
	double ARS1 = 1.3, AFP1 = 1.0, ISR1 = 1, resultado1 = 0, multiplicacion1 = 0, resta1;
	double ARS2 = 1.1, AFP2 = 0.9, ISR2 = 1, resultado2 = 0, multiplicacion2 = 0, resta2;
	double ARS3 = 1,   AFP3 = 0.8, ISR3 = 1,  resultado3 = 0, multiplicacion3 = 0, resta3;
	
	cout<<"Digite su sueldo bruto: ";
	cin>>sueldo_bruto;
	
	if(sueldo_bruto < 20000){
		resultado1 = (sueldo_bruto - ARS1);
		resultado1 -= AFP1;
		resultado1 -= ISR1;
		multiplicacion1 = (sueldo_bruto *12);
		resta1 = (multiplicacion1-resultado1);
		resta1 /= 12;
		cout<<"\nSu sueldo neto es: "<<resta1<<endl;
	}
	else if(sueldo_bruto < 50000){
		resultado2 = (sueldo_bruto - ARS2);
		resultado2 -= AFP2;
		resultado2 -= ISR2;
		multiplicacion2 = (sueldo_bruto *12);
		resta2 = (multiplicacion2-resultado2);
		resta2 /= 12;
		cout<<"\nSu sueldo neto es: "<<resta2<<endl;
	}
	else if(sueldo_bruto >= 50000){
		resultado3 = (sueldo_bruto - ARS3);
		resultado3 -= AFP3;
		resultado3 -= ISR3;
		multiplicacion3 = (sueldo_bruto *12);
		resta3 = (multiplicacion3-resultado3);
		resta3 /= 12;
		cout<<"\nSu sueldo neto es: "<<resta3<<endl;
	}
	
	

	
	getch();
	return 0;
}
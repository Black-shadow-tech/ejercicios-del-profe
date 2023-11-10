#include<iostream>
#include<conio.h>
#include<time.h>

using namespace std;

int main(){
	int numeros[5][6];
	int suma = 0, sumaPar = 0;
	
	srand(time(NULL));
	cout<<"Primera matriz "<<endl;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			numeros[i][j] = 1 + rand()%(9);
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			cout<<numeros[i][j]<<"  ";
		}
		cout<<"\n";
	}
	
	cout<<"\nla suma de todos los elementos de la matriz. "<<endl;
	
    for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			suma += numeros[i][j];
		}
	}
	cout<<suma<<endl;
	
	cout<<"\nsuma de los pares en la matriz. "<<endl;
	
	
    for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			if(numeros[i][j]%2 == 0){
				sumaPar += numeros[i][j];
			}
		}
	}
	
	cout<<sumaPar<<endl;
	
	cout<<"\nsuma de los impares en la matriz. "<<endl;
	
	int sumaimPar;
	
    for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			if(numeros[i][j]%2 != 0){
				sumaimPar += numeros[i][j];
			}
		}
	}
	
	cout<<sumaimPar<<endl;
	
	int Suma=0,j;
	
	int columnas[6];
	
	cout<<"\nsuma de las columnas. "<<endl;
	
    for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			
			if(i == 0){
				columnas[j] = numeros[i][j];
			}
			else{
				columnas[j] += numeros[i][j];
			}
		}
	}
	
	for(int j=0; j<6; j++){
		cout<<"la suma de las columnas "<<j<<" es: "<<columnas[j]<<endl;
	}
	
	cout<<"\nla suma de las filas:"<<endl;
	
	int filas[5];
		
    for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			
			if(j == 0){
				filas[i] = numeros[i][j];
			}
			else{
				filas[i] += numeros[i][j];
			}
		}
	}
	
	for(int i=0; i<5; i++){
		cout<<"la suma de las columnas "<<i<<" es: "<<filas[i]<<"\n";
	}
	
	cout<<"\nSuma de la diagonal:\n";

	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(i==j){
		    Suma += numeros[i][j];
			}else{
			}
		}
	}
	cout<<Suma<<endl;
	
	getch();
	return 0;
}
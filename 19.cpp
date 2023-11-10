#include <iostream>
using namespace std;

int main(){
    int dia,mes,ano;
    
    cout<<"Digite su fecha de nacimiento, por ejemplo: (17/04/1973): "<<endl; 
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Ano: ";
    cin>>ano;
    
    int resultado1 = (dia+mes+ano);
    cout<<resultado1;
    
    int suma = 0;

    while(resultado1 > 0){
        suma += resultado1 % 10;
        resultado1 /= 10;
    }
    
    int resultado = (suma/2);

    cout<<"Su numero magico es: "<<resultado<<endl;
    

    return 0;
}

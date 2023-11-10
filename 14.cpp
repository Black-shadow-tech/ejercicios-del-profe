#include<iostream>
#include<conio.h>

using namespace std;

struct materia {
    char nombre[20]; 
    float matematica;
    float sociales;
    float naturales;
    float lenguage;
    float promedio;
    float suma;
    
	char nombre1[20]; 
    float matematica1;
    float sociales1;
    float naturales1;
    float lenguage1;
    float promedio1;
	float suma1;    
}grupo[3];

int main() {
    float mayor1 = 0, mayor2 = 0;
    int Nmayor1 = 0, Nmayor2 = 0;  // Cambiar a int para almacenar el índice del mejor estudiante
    
    cout<<"\nEstudiantes del grupo #1:\n";
    for (int i=0; i<3; i++) {
        cout<<i+1<< ". Nombre del estudiante: "; fflush(stdin);
        cin.getline(grupo[i].nombre,20,'\n');

        cout << "\nSus calificaciones:\n";
        cout << "Matematica: ";
        cin >> grupo[i].matematica;
        cout << "Sociales: ";
        cin >> grupo[i].sociales;
        cout << "Naturales: ";
        cin >> grupo[i].naturales;
        cout << "Lenguage: ";
        cin >> grupo[i].lenguage;
        cout << "\n";
    }
    
    float suma=0;
    float divicion=0;

    for (int i = 0; i < 3; i++) {
        grupo[i].promedio = (grupo[i].matematica + grupo[i].sociales + grupo[i].naturales + grupo[i].lenguage) / 4;
        suma += grupo[i].promedio;
        divicion = (suma / 12);

        if (grupo[i].promedio > mayor1) {
            mayor1 = grupo[i].promedio;
            Nmayor1 = i;
        }

        cout<<i+1<<"Nombre: " << grupo[i].nombre<<endl;
        cout << "Promedio: " << grupo[i].promedio<<endl;
        cout << "\n";
    }
    
    cout<<"\nEstudiantes del grupo #2:\n";
    for (int j=0; j<3; j++) {
        cout<<j+1<< ". Nombre del estudiante: "; fflush(stdin);
        cin.getline(grupo[j].nombre1,20,'\n');

        cout << "\nSus calificaciones:\n";
        cout << "Matematica: ";
        cin >> grupo[j].matematica1;
        cout << "Sociales: ";
        cin >> grupo[j].sociales1;
        cout << "Naturales: ";
        cin >> grupo[j].naturales1;
        cout << "Lenguage: ";
        cin >> grupo[j].lenguage1;
        cout << "\n";
    }
    
    float suma1=0;
    float divicion1=0;

    for (int j=0; j<3; j++){
        grupo[j].promedio1 = (grupo[j].matematica1 + grupo[j].sociales1 + grupo[j].naturales1 + grupo[j].lenguage1) / 4;
        suma1 += grupo[j].promedio1;
        divicion1 = (suma1 / 12);
        
        if (grupo[j].promedio1 > mayor2) {
            mayor2 = grupo[j].promedio1;
            Nmayor2 = j;
        }

        cout<<j+1<<"Nombre: " << grupo[j].nombre1<<endl;
        cout << "Promedio: " << grupo[j].promedio1<<endl;
        cout << "\n";
    }
    

    //promedio de todos lo promodios del primer gruopo...
    cout<<"Este es el promedio del grupo #1: ";
    cout.precision(1);
    cout<<fixed<<divicion;
    cout<<"\n";

    cout<<"Este es el promedio del grupo #2: ";
    cout.precision(1);
	cout<<fixed<<divicion1;
    cout<<"\n";
    
    //Sacando el estudiante con mejor promedio de cada grupo...
    cout<<"\nLos mejores estudiantes de los 2 grupos:\n";
    
    cout<<"Grupo #1: " <<endl;
    cout<<"Nombre: "<<grupo[Nmayor1].nombre<<endl;
    cout<<"Promedio: "<<mayor1<<endl;
    
    cout<<"\nGrupo #2: " <<endl;
    cout<<"Nombre: "<<grupo[Nmayor2].nombre1<<endl;
    cout<<"Promedio: "<<mayor2<<endl;
    cout<<"\n";
    
    
    //comprobando cual es el mejorestudianten de los dos grupos...
    if(mayor1 > mayor2){
    	cout<<"Este es el mejor estudiante de la escuela: " <<endl;
        cout<<"Nombre: "<<grupo[Nmayor1].nombre<<endl;
        cout<<"Promedio: "<<mayor1<<endl;
	}
	else{
	    cout<<"\nEste es el mejor estudiante de la escuela: " <<endl;
        cout<<"Nombre: "<<grupo[Nmayor2].nombre1<<endl;
        cout<<"Promedio: "<<mayor2<<endl;
	}

    getch();
    return 0;
}

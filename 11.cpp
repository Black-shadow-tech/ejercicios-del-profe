#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    string palabras;
    char aux,i,j;
    int longitud;
    
    cout<<"Digite una palabra: ";
    cin>>palabras;
    
    longitud = palabras.length();

    for(i=0; i<longitud; i++){
        for(j=0; j<longitud; j++){
            if(palabras[j] > palabras[j+1]){ 
                aux = palabras[j]; 
                palabras[j] = palabras[j+1]; 
                palabras[j+1] = aux; 
            }
        }
    }

    for(int i=0;i<longitud;i++){
        cout<<palabras[i]<<endl;
    }
    
    getch();
    return 0;
}
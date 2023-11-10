#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char cad[15];
    char cad1[15];
    
    cout<<"Digite una palabra: ";
    cin.getline(cad,15,'\n');
    
    strcpy(cad1,cad);
    strrev(cad1);
    
    if(strcmp(cad1,cad)==0){
    	cout<<"La palabra ("<<cad<<") es palindroma "<<endl;
	}
    else{
    	cout<<"su palabra no es palindroma";
	}
    getch();
    return 0;
}
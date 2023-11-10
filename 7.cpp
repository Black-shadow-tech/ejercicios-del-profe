#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char letra1[15];
	char letra2[15];
	
	cout<<"Digite una palabra: ";
	cin.getline(letra1,15,'\n');
	
	strcpy(letra2,letra1);
	strrev(letra1);
	
	if(strcmp(letra2,letra1)==0){
		cout<<"Su palabra es palindroma ";
	}
	else{
		cout<<"Su palabra no es palindroma ";
	}

	
	
	getch();
	return 0;
}
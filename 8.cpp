#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	float a,b,resultado;
	
	resultado = tgamma(a);
	resultado = tgamma(b);
	
	for(int i=0; i<1; i++){	
		cout<<"Digite el numero de a: ";
	    cin>>b;
	    cout<<"Digite el numero de b: ";
	    cin>>b;
	    resultado = pow(a,1)+pow(b,1)+(1*a*b) + pow(a,2)+pow(b,2)+(2*a*b) + pow(a,3)+pow(b,3)+(3*a*b) + pow(a,4)+pow(b,4)+(4*a*b);
	}
	
	cout<<"(a+b)2"<<" = "<<resultado<<endl; 
	
	
	
	
	getch();
	return 0;
}
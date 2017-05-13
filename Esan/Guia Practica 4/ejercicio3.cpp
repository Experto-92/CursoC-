#include<iostream>

using namespace std;

int main(){
	int edad, mayor = 0, menor = 0;
	
	do{
		cout<<"Ingrese una edad: ";cin>>edad;
		if (edad>=18){
			mayor = mayor+1;
		}else if (edad<18 & edad>0){
			menor = menor+1;
		}	
	}while(edad != 0);
	cout<<"La cantidad de personas mayores es: "<<mayor<<endl;
	cout<<"La cantidad de personas menores es: "<<menor<<endl;
	
	return 0;
}

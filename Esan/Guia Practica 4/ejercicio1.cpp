#include<iostream>

using namespace std;

int main(){
	int num, suma = 0 ;
	
	do{
		cout<<"Ingrese un numero: "; cin>>num;
		suma = suma + num;
	} while (num!=0);
	
	cout<<"La suma es: "<<suma;
	return 0;
}

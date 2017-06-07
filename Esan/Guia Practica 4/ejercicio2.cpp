#include<iostream>

using namespace std;

int main(){
	float nota, suma= 0, prom, i = 0;
	
	do{
		cout<<"Ingrese una nota: "; cin >> nota;
		if(nota>=0 & nota<=20){
			suma = suma + nota;
			i++;
			prom = suma / i;
			
		}
		cout <<suma<<"  "<<i<<"   "<<prom<<endl;
		}while (nota>=0);
	cout<<"El promedio es: " <<prom<<endl;
	return 0;
}

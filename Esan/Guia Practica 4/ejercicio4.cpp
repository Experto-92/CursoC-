#include<iostream>

using namespace std;

int main(){
	int puntaje, A=0,B=0,C=0,N=0;
	
	do{
		cout<<"Ingrese un puntaje: ";cin>>puntaje;
		if (puntaje>=70 & puntaje<=100){
			A++;
			N++;
		}else if (puntaje>=30 & puntaje<=69){
			B++;
			N++;
		}else if (puntaje>=0 & puntaje<=29){
			C++;
			N++;
		}
	}while(puntaje >= 0);
	cout<<endl;
	cout<<"Numero de estudiantes que obtuvieron A: "<<A<<endl;
	cout<<"Numero de estudiantes que obtuvieron B: "<<B<<endl;
	cout<<"Numero de estudiantes que obtuvieron C: "<<C<<endl;
	cout<<"Numero de estudiantes que rindieron el examen: "<<N<<endl;
	return 0;
}

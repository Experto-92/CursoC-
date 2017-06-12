#include<iostream>

using namespace std;

string mejorAlumno(int *Notas,string *Alumnos,int t){
	int p, mejorNota=0;
	for(int i=0;i<t;i++){
		if (Notas[i]>mejorNota){
			p=i;
		}
	}
	return Alumnos[p];
}

int main(){
	int Notas[4]={5,10,15,20};
	string Alumnos[4]={"Pepito", "Juanito", "Pedrito", "asdfgadfs"};
	
	cout<<"El mejor Alumno es: "<<mejorAlumno(Notas, Alumnos, 4);
	return 0;
}

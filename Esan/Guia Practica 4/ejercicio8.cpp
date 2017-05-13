#include<iostream>

using namespace std;

int main(){
	int cant, edad, i;
	string estado;
	char sexo;
	cant = 0;
	i=1;
	do{
		cin>>sexo;
		cin>>edad;
		cin>>estado;
		if(sexo == 'M' & edad>=16 & edad<=21 & estado == "soltero"){
			cant++;
		}
		i++;
	}while(i<10);
	
	cout<<cant<<endl;
	
	return 0;
}

#include<iostream>

using namespace std;

int main(){
	float nota, suma= 0, prom, i = 0;
	
	do{
		cin >> nota;
		if(nota>=0 & nota<=20){
			suma = suma + nota;
			prom = suma / i;
			i++;
		}
		cout <<suma<<"  "<<i<<"   "<<prom<<endl;
		}while (nota>=0);
	cout<<prom;
	return 0;
}

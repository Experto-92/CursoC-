#include <iostream>

using namespace std;

int main()
{
    float cant, total=0;
	char tipo;
	do{
		cout<<"Ingrese el tipo de de producto: ";cin>>tipo;
		cout<<"Ingrese la cantidad: ";cin>>cant;
		if (tipo == 'A'){
			total = total + 12.60 * cant;
		}else if (tipo =='B'){
			total = total + 23.50 * cant;
		}else if (tipo =='C'){
			total = total + 27.40 * cant;
		}else if (tipo =='D'){
			total = total + 31.70 * cant;
		}else{
			cout<<"Tipo de producto no valido"<<endl;
			tipo='F';
		}
	}//while(tipo=='A' | tipo=='B' | tipo=='C' | tipo=='D' | cant!=0);
	while(tipo!='F' | cant!=0);
	cout<<"El monto total es: "<<total<<endl;
    return 0;
}

#include<iostream>

using namespace std;

int main(){
	float cant, pago, totalrecaudado = 0;
	char tipo;
	
	
	do{
		cout<<"Ingrese el tipo de gasolina: ";cin>>tipo;
		cout<<"Ingrese la cantidad de galones solicitados: ";cin>>cant;
		if(tipo=='A'){
			pago = 5.20*3.785*cant;
			totalrecaudado = totalrecaudado + pago;
			cout<<"Monto a pagar :"<<pago<<endl;
		}else if(tipo == 'B'){
			pago = 4.50*3.785*cant;
			totalrecaudado = totalrecaudado + pago;
			cout<<"Monto a pagar :"<<pago<<endl;
		}else if(tipo=='C'){
			pago = 3.30*3.785*cant;
			totalrecaudado = totalrecaudado + pago;
			cout<<"Monto a pagar :"<<pago<<endl;
		}
	}while(tipo != 'D' & cant!=0);
	
	cout<<"Total Recaudado en el dia: "<<totalrecaudado<<endl;
	return 0;
}

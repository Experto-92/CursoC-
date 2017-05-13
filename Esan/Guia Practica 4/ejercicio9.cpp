#include<iostream>

using namespace std;

int main(){
	double talla, record;
	do{
		cin>>talla;
		if (talla>record){
			record = talla;
		}
		
	}while(talla>0);
	
	
	cout<<record;
	
	
	return 0;
}

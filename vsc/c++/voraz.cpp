#include <iostream>

using namespace std;

int main(){
	int moneda[] = {100,25,10,5,1};
	int veces[] = { 0, 0, 0, 0, 0};
	int n = 5;
	int monto;
	cout<<"Cambio a devolver: ";
	cin>>monto;
	for(int i=0;i<n;i++){
		veces[i] = monto/moneda[i];
		monto = monto%moneda[i];
	}
	for(int i=0;i<n;i++){
		cout<<"Monedas de "<<moneda[i]<<" cantidad "<<veces[i]<<endl;
	}
}

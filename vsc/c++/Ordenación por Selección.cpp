#include <iostream>

using namespace std;

void intercambiar (double& x, double& y){
	double aux=x;
	x=y;
	y=aux;
}

void ordSeleccion (double a[], int n){
	int indiceMenor, i, j;
	for (i=0; i<n-1;i++){
		indiceMenor=i;
		for(j=i+1; j<n; j++)
			if(a[j]<a[indiceMenor])
				indiceMenor=j;
		if(i!=indiceMenor){
			intercambiar (a[i], a[indiceMenor]);
		}
	}
}

int main(int argc, char** argv){
	int n=8;
	double a[] ={17,4,32,45,9,1,8,11};
	ordSeleccion(a, n);
	for(int i=0; i<8;i++){
	cout << a[i] << endl;
	}
	return 0;
}


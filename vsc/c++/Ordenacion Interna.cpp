#include <iostream>

using namespace std;

void intercambiar (int &x, int &y){
	int aux = x;
	x = y;
	y = aux;
}

void ordIntercambio(int a[], int n){
	
	int i, j;
	
	for(i=0; i<n-1; i++){
		for (j=i+1; j<n; j++)
		if (a[i]>a[j]){
			intercambiar (a[i], a[j]);
		}
	}
}

int main(int argc, char** argv){
	int a[] ={1,4,6,2,9,5,8,11};
	ordIntercambio(a, 8);
	for(int i=0; i<8;i++){
	cout << a[i] << endl;
	}
	return 0;
}

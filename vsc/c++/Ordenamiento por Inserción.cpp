#include <iostream>

using namespace std;

void ordInsercion (int a[], int n){
	int i, j, aux;
	for (i=1; i <n; i++){
		j=i;
		aux=a[i];
		while (j>0 && aux < a[j-1]){
			a[j]=a[j-1];
			j--;
		}
		a[j]=aux;
	}
}

int main(int argc, char** argv){
	int n=8;
	int a[] ={17,4,32,45,9,1,8,11};
	ordInsercion(a, n);
	for(int i=0; i<8;i++){
	cout << a[i] << endl;
	}
	return 0;
}


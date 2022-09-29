#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
void en(int *m)
{
    for(int i=0;i<5;i++)
    {
        *(m+i)=0;
    }
}
void mostrar(int *m){
     for(int i=0;i<5;i++)// bucle para recorrer el arreglo 
	 {
        cout<<*(m+i)<<endl;
    }
}
int num_monedas(int *arry){
        int num=0;
        for (int i = 0; i < 5; i++) // bucle para recorrer el arreglo 
		{
            num+=*(arry+i);
        }
        return num;
    }
void cambio(int dinero, int monedas[]){
    int *cant_monedas;
    cant_monedas = new int[5];
    en(cant_monedas);
    int a=1;
    for (int i = 0; i < 5; i++)// bucle para recorrer el arreglo 
	 {
        *(cant_monedas+i)= dinero/monedas[i];
        while(*(cant_monedas+i)>0 && *(cant_monedas+i)!=dinero-1)
            {
                cout<<"Caso :"<<a<<endl;//impresión de mensajes del usuario
                int resto=dinero-(monedas[i] * *(cant_monedas+i));
                for(int j=0;j<5;j++)// bucle para recorrer el arreglo 
				{
                    if(j>i){
                         *(cant_monedas+j)=(resto/monedas[j]);
                         resto-=monedas[j]**(cant_monedas+j);
                    }
                cout<<*(cant_monedas+j)<<" monedas de "<<monedas[j]<<"ctv"<<endl;//impresión de mensajes del usuario
                }
                cout<<"Numero de Monedas: "<<num_monedas(cant_monedas)<<endl;//impresión de mensajes del usuario
                cout<<"****"<<endl;
             a++;
             *(cant_monedas+i)= *(cant_monedas+i)-1;
             }
        }
}
int main(){
    int dinero;
    int monedas[]={50, 20, 25, 10, 1};
    cout<<"Ingrese el valor  para realizar el cambio"<<endl;//impresión de mensajes del usuario
    cin>>dinero;
    if(dinero<0)
    {
       cout<<"No se acepta valores negativos"<<endl;//impresión de mensajes del usuario
    }
    else{
        cambio(dinero,monedas);
                    }
    system("pause");
    return(0);
}
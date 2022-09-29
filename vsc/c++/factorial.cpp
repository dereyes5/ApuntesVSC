#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        n=1;
    }else{
        n=n*factorial(n-1);
    }
    return n;
}
int main(){
    int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
    if(x>=0){
        cout<<factorial(x)<<endl;
    } else{
        cout<<"el numero no debe ser negativo"<<endl;
    }
}
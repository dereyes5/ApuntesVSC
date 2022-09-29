//forma top-down
#include <iostream>
using namespace std;
int fib(int n, int tabla[]){
    if (n==0 || n==1)
    {
        return n;
    }
    if (tabla[n]!=0)
    {
        return tabla[n];
    }
    tabla[n]=fib(n-1,tabla)+fib(n-2,tabla);
    return tabla[n];
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Ingrese el orden"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++){
        int tabla[i+1]={0};
        int fibonacci = fib(i,tabla);
        cout<<fibonacci<<"-";
    }
    return 0;
}

//forma bottom-up
#include <iostream>
using namespace std;
int fib(int n){
    if (n==0 || n==1)
    {
        return n;
    }
    int a=0;
    int b=1;
    for (int i = 2; i <= n; i++)
    {
        int temp=a+b;
        a=b;
        b=temp;
    }
    return b;
}
int main()
{
    int n;
    cout << "Ingrese el orden"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++){
        int tabla[i+1]={0};
        int fibonacci = fib(i);
        cout<<fibonacci<<"-";
    }
    return 0;
}
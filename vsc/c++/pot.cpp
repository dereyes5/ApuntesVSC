#include <iostream>
using namespace std;
int potIter(int a,int b){ //a= base b=exponente
    int result=1;
    for (int i = 1; i <= b; i++)
    {
        result=result*a;
    }
    return result;
}
int potRecur(int base,int exponente){
    if(exponente==0){
        return 1;
    } else{
        return base*potRecur(base,exponente-1);
    }
}
int main(){
    cout<<potIter(2,4)<<endl;
    cout<<potRecur(2,4)<<endl;
}
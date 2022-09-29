#include <iostream>
using namespace std;
int suma(int x,int y){
    return x+y;
}
float suma(float x, float y){
    return x+y;
}
double suma(double x,double y){
    return x+y;
}
int main(){
    cout<<suma(2,3)<<endl;
    cout<<suma(2.5,2.5)<<endl;
    cout<<suma(0.5f,1.0f)<<endl;
}
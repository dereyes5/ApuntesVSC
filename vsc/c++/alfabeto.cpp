#include <iostream>
using namespace std;
void funcionA(char c);
void funcionB(char c);

void funcionA(char c){
    if(c>'A'){
        funcionB(c);
    }
    cout<<c;
}
void funcionB(char c){
    funcionA(--c);
}
int main()
{
    cout<<"Alfabeto : ";
    funcionA('Z');
    cout<<endl;
    return 0;
}


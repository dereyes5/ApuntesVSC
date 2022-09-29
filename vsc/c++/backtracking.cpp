#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;
int cambio(int d[], int i, int j){
    int r;
    if (j==0)
    {
        r=0;
    }else if(i==0){
        r=std::numeric_limits<int>::max();
    }else if(d[i]>j){
        r=cambio(d,i-1,j);
    }else{
        r=min(cambio(d,i-1,j),1+cambio(d,i,j-d[i]));
    }
    return r;
}
int main(int argc, char const *argv[])
{
    int n=5;
    int d[n]={1,5,10,15,20,25};
    int j;
    cout<<"Las denominaciones son: "<<endl;
    for (int k = 0; k <= n; k++)
    {
        cout<<d[k]<<" ";
    }
    cout<<endl;
    cout<<"ingrese la cantidad: ";
    cin>>j;
    cout<<cambio(d,n,j)<<endl;
    int usada=j/cambio(d,n,j);
}
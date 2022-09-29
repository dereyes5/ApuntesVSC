#include <iostream>
using namespace std;
struct coordenada
{
double x,y;
};
coordenada operator+(const coordenada&p, const coordenada&q);
int main(){
coordenada a, b, r;
a.x= 1.2;
a.y= 1.5;
b.x= 4.5;
b.y= 1.54;
r=a+b;
cout<<r.x<<", "<<r.y<< endl;
return 0;
}
coordenada operator+(const coordenada&p, const coordenada&q)
{
coordenada r;
r.x= p.x+q.x;
r.y= p.y+ q.y;
return r;
}